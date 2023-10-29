#include <stdio.h>
#include <unistd.h>

int main(void) {
  puts("......");
  sleep(1);
  puts("sleep");
  usleep(2000000);
  puts("sleep");
}
