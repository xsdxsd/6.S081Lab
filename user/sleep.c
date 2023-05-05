#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("Usage: sleep seconds\n");
    exit(0);
  }

  int ticks = atoi(argv[1]) * 100; // 将秒转换为刻度数
  sleep(ticks);
  exit(0);
}
