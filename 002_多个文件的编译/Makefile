# 指定编译器
CC = gcc

# 编译选项
CFLAGS = -Wall -g

# 目标文件
TARGET = main

# 源文件
SRCS = main.c

# 目标文件
OBJS = $(SRCS:.c=.o)

# 库文件
LIBRARY = libmath.a

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS) $(LIBRARY)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -L. -lmath

# 编译源文件生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 编译 math.c 生成静态库
$(LIBRARY): math.o
	ar rcs $(LIBRARY) math.o

# 编译 math.c 生成目标文件
math.o: math.c math.h
	$(CC) $(CFLAGS) -c math.c -o math.o

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET) $(LIBRARY) math.o

# 伪目标
.PHONY: all clean