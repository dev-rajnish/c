#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define NL "\n"
#define CLEAR_INPUT \
  while (getchar() != '\n') \
    ;

#if defined(_WIN32) || defined(_WIN64)
#include <conio.h>
#define WAIT getch()
#define CLR "cls"
#else
#define WAIT getchar()
#define CLR "clear"
#endif
int main(void) {
  system(CLR);
  double l, b, h, ar;
  puts("length ? ");
  scanf("%lf", &l);
  CLEAR_INPUT;
  puts("base ? ");
  scanf("%lf", &b);
  CLEAR_INPUT;
  ar = 0.5 * l * b;
  printf("Area = %.3lf", ar);
  h = sqrt(pow(l, 2) + pow(b, 2));
  printf(NL "Hypotenuse = %.3lf ", h);
  WAIT;
  getchar();
  return 0;
}
