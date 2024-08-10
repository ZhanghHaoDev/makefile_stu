#!/bin/bash

# 设置编译器和编译选项
CC=gcc
CFLAGS="-Wall -g"

# 设置源文件和目标文件
SRC=math.c
OBJ=math.o
LIB=libmath.a

# 编译源文件生成目标文件
$CC $CFLAGS -c $SRC -o $OBJ

# 打包目标文件生成静态库
ar rcs $LIB $OBJ

# 清理目标文件
rm -f $OBJ

echo "静态库 $LIB 已生成"