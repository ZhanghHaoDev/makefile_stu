#include <stdio.h>
#include <glog/logging.h>

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);

    // 设置日志目录
    FLAGS_log_dir = "./logs";
    google::SetLogDestination(google::INFO, "./logs/info_");
    google::SetLogDestination(google::WARNING, "./logs/warning_");
    google::SetLogDestination(google::ERROR, "./logs/error_");

    LOG(INFO) << "Hello, world!";
    return 0;
}