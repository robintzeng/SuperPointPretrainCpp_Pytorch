
## SuperPoint C++
### Superpoint with pretrain model written in C++  

### 1. Change  CMAKE_PREFIX_PATH in CMakeList to your libtorch path
### 2. Install libtorch 
```
wget https://download.pytorch.org/libtorch/cpu/libtorch-shared-with-deps-1.0.1.zip 
```
### 3. Build and Run
```
mkdir build
cd ./build
cmake ..
make 
./SuperPointPretrainC++
```
### Codes are extract from
https://github.com/KinglittleQ/SuperPoint_SLAM