# libpqxx with cmake example without building libpqxx in cmake

# Setup environment
**1. Install CMake**
```
cd ~
wget https://github.com/Kitware/CMake/releases/download/v3.14.5/cmake-3.14.5.tar.gz
tar xf cmake-3.14.5.tar.gz
cd cmake-3.14.5
./bootstrap --parallel=10
make -j4
sudo make -j4 install
```

**2. Install libpqxx**
```
cd ~
git clone https://github.com/jtv/libpqxx.git
./configure
make -j4
sudo make install

```

# How to build
```
mkdir build
cd build
cmake ..
cmake --build .
```

# How to run
```
./main

Opened database successfully: postgres
```
