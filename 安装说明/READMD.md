# 从源代码编译 Manticore

从源代码编译 Manticore Search 允许自定义构建配置，例如禁用某些功能或添加测试补丁。例如，你可能想要禁用嵌入的 ICU，以便使用系统上安装的可以独立升级的不同版本。这对于希望为 Manticore Search 项目贡献代码的人也很有用。

## 依赖：CMake 3.30 GCC8.5 mysql 5.7.44 postgresql 16.4

#### **从压缩包获取 并 编译** 

安装 Boost
```bash
cd /home/soft/sources
tar xvf boost_1_86_0.tar.gz
cd boost_1_86_0/
./bootstrap.sh --prefix=/home/soft/boost
./b2 install
export PATH=/home/soft/boost/include:$PATH
export LD_LIBRARY_PATH=/home/soft/boost/lib:$LD_LIBRARY_PATH
export CFLAGS="$CFLAGS -I/home/soft/boost/include"
export LDFLAGS="$LDFLAGS -L/home/soft/boost/lib"
```

检查 Galera 是否已安装在你的系统上：
```bash
rpm -qa | grep galera
```

安装 bison
```bash
cd /home/soft/sources
tar -zxf bison-3.8.2.tar.gz
cd bison-3.8.2
./configure --prefix=/home/soft/bison
make && make install
export PATH=/home/soft/bison/bin:$PATH
source ~/.bashrc  # 或者 source ~/.bash_profile
bison --version
```

安装 flex
```bash
cd /home/soft/sources
tar -zxf flex-2.6.4.tar.gz
cd flex-2.6.4
./configure --prefix=/home/soft/flex
make && make install
export PATH=/home/soft/flex/bin:$PATH
source ~/.bashrc  # 或者 source ~/.bash_profile
flex --version
```


安装 cppjieba
```bash
cd /home/soft/sources
tar -zxf cppjieba-4.8.1.tar.gz
cd cppjieba
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/home/soft/cppjieba -Wno-dev
cmake --build .
cmake --build . --target install
```

Manticore 使用 CMake 进行配置。假设代码码在/home/soft/sources，执行以下命令：

```bash
export PATH=/usr/local/pgsql/bin:/usr/local/pgsql/include:$PATH
export LD_LIBRARY_PATH=/usr/local/pgsql/lib:$LD_LIBRARY_PATH
export CFLAGS="$CFLAGS -I/usr/local/pgsql/include"
export LDFLAGS="$LDFLAGS -L/usr/local/pgsql/lib"
export PATH=/home/soft/mysql/bin:/home/soft/mysql/include:$PATH
export LD_LIBRARY_PATH=/home/soft/mysql/lib:$LD_LIBRARY_PATH
export CFLAGS="$CFLAGS -I/home/soft/mysqlinclude"
export LDFLAGS="$LDFLAGS -L/home/soft/mysql/lib"
source ~/.bashrc  # 或者 source ~/.bash_profile

cd /home/soft/sources
mkdir manticoresearch-6.3.6
tar -zxf manticoresearch-6.3.6.tar.gz -C manticoresearch-6.3.6
cd manticoresearch-6.3.6
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/home/soft/manticoresearch \
            -DCMAKE_CXX_FLAGS="-fpermissive" \
            -DWITH_POSTGRESQL=1 -DPostgreSQL_LIBRARY=/usr/local/pgsql/lib/libpq.so -DPostgreSQL_INCLUDE_DIR=/usr/local/pgsql/include \
            -DMYSQL_INCLUDE_DIR=/home/soft/mysql/include -DMYSQL_LIBRARY=/home/soft/mysql/lib/libmysqlclient.so \
            -Wno-dev \
            -DBoost_DIR=/home/soft/boost/lib -DBoost_INCLUDE_DIR=/home/soft/boost/include \
            -DWITH_RE2_FORCE_STATIC=0 -DWITH_ICU_FORCE_STATIC=0 \
            -DWITH_JIEBA=OFF
cmake --build .
# cmake --build . --target install 
cmake --install . --prefix /home/soft/manticoresearch
```

进入安装目录
```bash
cd /home/soft/manticoresearch/usr/bin
```

检查版本号
```bash
./searchd -v
./indexer -h
```

重建索引： 使用 indexer 命令更新或创建索引
```bash
sudo ln -s /usr/local/pgsql/bin/psql /usr/local/pgsql/bin/pgsql
mkdir -p /home/soft/manticoresearch/index/pois
# 普通模式的默认目录data_dir
mkdir -p /var/lib/manticore/
./indexer --all --config ../../etc/manticoresearch/poi_index.conf --rotate
# 重建特定的索引
./indexer pois_index --config ../../etc/manticoresearch/poi_index.conf
./indexer pois_index --config ../../etc/manticoresearch/poi_index.conf --rotate

# 暂时用不上
mkdir -p /home/soft/manticoresearch/tmp
./indexer --rotate --config ../../etc/manticoresearch/poi_index.conf --print-rt rt_pois pois_index > /home/soft/manticoresearch/tmp/dump_regular.sql
mysql -P9306 -h0 -e "truncate table rt_pois"
mysql -P9306 -h0 < /home/soft/manticoresearch/tmp/dump_regular.sql

mysql -P9306 -h0 -e "SHOW TABLES"

```

处理来自客户端的查询 启动服务
```bash
# 实时模式 有 data_dir
./searchd --config ../../etc/manticoresearch/manticore.conf
# 普通模式 无 data_dir
./searchd --config ../../etc/manticoresearch/poi_index.conf
# 检测服务是否正常
curl http://127.0.0.1:9308/_cat/indices
mysql -P9306 -h0 -e "show table pois_index settings;"
mysql -P9306 -h0 -e "SELECT * FROM pois_index WHERE MATCH('@name 公积板村委会');"
mysql -P9306 -h0 -e "SELECT * FROM pois_index;"
```

停止服务
```bash
ps aux | grep searchd
./searchd --config ../../etc/manticoresearch/manticore.conf --stop
./searchd --config ../../etc/manticoresearch/poi_index.conf --stop
```