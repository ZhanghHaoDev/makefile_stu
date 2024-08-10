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
LIBRARY = math/libmath.a

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS) $(LIBRARY)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -Lmath -lmath

# 编译源文件生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 调用 math.sh 生成静态库
$(LIBRARY):
	cd math && ./math.sh

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)
	cd math && rm -f libmath.a math.o

# 伪目标
.PHONY: all clean