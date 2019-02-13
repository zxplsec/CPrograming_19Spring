#!/bin/sh

# 将 hello.c 编译成一个动态库 libhello.so
gcc hello1.c hello2.c -fPIC -shared -o libhello.so

# 将 main.c 与动态库连接，生成可执行文件 main
gcc main.c -L. -lhello -o main 

# 运行 main
./main


# 编译参数解析
# 
# -shared : 指定生成动态链接库
#
# -fPIC : 表示编译为位置独立的代码
#
# -L. : 表示要连接的库在当前目录下
#
# -lhello : 编译器查找动态连接库是有隐含的命名规则，即在给出的名字前面加上lib，后面加上.so来确定库的名称

