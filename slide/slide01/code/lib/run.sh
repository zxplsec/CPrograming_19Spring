#!/bin/sh

# 将 hello.c 编译成 hello.o (静态库和动态库都由 .o 文件生成)
gcc -c hello1.c
gcc -c hello2.c

# 为遵循 linux 中静态库的命名规范，静态库命名为 libhello.a
ar -crv libhello.a hello1.o hello2.o

# 将 main.c 与静态库连接，生成可执行文件 main
gcc -o main main.c -lhello -L.

# 运行 main
./main
