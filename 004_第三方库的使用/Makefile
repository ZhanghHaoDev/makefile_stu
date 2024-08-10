# 指定编译器
CC = g++

# 编译选项，添加 glog 和 gflags 头文件路径
CFLAGS = -Wall -g -I/opt/homebrew/opt/glog/include -I/opt/homebrew/opt/gflags/include

# 链接选项，添加 glog 和 gflags 库文件路径
LDFLAGS = -L/opt/homebrew/opt/glog/lib -L/opt/homebrew/opt/gflags/lib -lglog -lgflags

# 目标文件
TARGET = main

# 源文件
SRCS = main.c

# 目标文件
OBJS = $(SRCS:.c=.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

# 编译源文件生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)

# 伪目标
.PHONY: all clean