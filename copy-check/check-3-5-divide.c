#include <stdio.h>

#define CLEAR_INPUT                                                            \
  while ((getchar() != '\n'))                                                  \
    ;

void divide_check(int num); // line 21

int main() {

  int num = 0;
  printf("num : ");
  scanf("%d", &num);
  CLEAR_INPUT;

  divide_check(num);

  getchar();
  return 0;
}

void divide_check(int num) {
  if (num % 3 == 0) {
    if (num % 5 == 0) {
      puts("divide by 3, 5, and 3 & 5 both");
    }
    if (num % 3 == 0 && num % 5 != 0) {
      puts("only by 3");
    }
  } else if (num % 5 == 0) {
    puts("only by 5");
  } else {
    puts("not any");
  }
}
