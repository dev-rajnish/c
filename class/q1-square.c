/*
  * Q. Find the area and perimeter of Square.
  * compile --  
  *  gcc/clang -o q1-square q1-square.c -lm
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <conio.h>

/*
  * void main (){}
  * clrscr();
 */
int main (){
  double s, peri, ar;
  
  puts("What is the side of square ?");
  scanf("%lf", &s);

  // perimeter
  peri = 4*s;
  printf("\nPerimeter of Square = %.3lf\n", peri);
  
  //Area of square
  ar = pow(s,2);
  printf("\nArea of Square = %.3lf", ar);

  //getch();
  while (getchar() != '\n');
  getchar();

  return 0;
}
