#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int num = 0;

  printf("Dislpay number line upto : ");
  fflush(stdout);

  scanf("%d", &num);

  printf("\e[A\r");
  fflush(stdout);

  if (num < 0) {
    num = -num;
  }
  /* printing number  */
  for (int i = num; i >= -num; i--) {

    if (i == 0) {
      printf("\e[1;31m% 5d\e[0m", i);
      fflush(stdout);

    } else if (i < 0) {
      printf("\e[33m%+5d\e[0m", i);
      fflush(stdout);

    } else {
      printf("\e[36m%+5d\e[0m", i);
      fflush(stdout);

    }
    usleep(100000);
  }
  puts("");
  fflush(stdout);

  /* printing ____|  */
  for (int i = num; i >= -num; i--) {
    printf("\e[0;4m    |");
    fflush(stdout);

    usleep(100000);
  }
  puts("    ");
  fflush(stdout);

  /* printing `    |` */
  for (int i = num; i >= -num; i--) {
    printf("\e[0m    |");
    fflush(stdout);

    usleep(100000);
  }

  return 0;
}
