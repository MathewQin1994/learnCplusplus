# preprocess
g++ -E add.cpp -o add.i

# Compilation 生成汇编文件
g++ -S add.cpp -o add.s

# Compilation 生成汇编文件，生成obj
g++ -c add.cpp -o add.obj


