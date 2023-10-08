/*
  * Q. Find the diameter, area and circumference. 
*/
#include <stdio.h>
//#include <conio.h>

//void main(){}
//clrscr();
int main (void){
  
  double pie = 3.14159, r, ference, dia, ar;

  puts("What is the radius of circle ?");
  scanf("%lf", &r);
  
  // diameter of circle 
  dia =  2 * r;
  printf("\nDiameter = %.3lf units\n", dia);

  // circumference of circle 
  ference = 2 * pie * r;
  printf("\nCircumference = %.3lf(approx.)\n", ference);

  // Area of circle 
  ar = pie * r * r;
  printf("\nArea = %.3lf(approx.)\n", ar);

  //getch();
  while (getchar() != '\n');
  getchar();

  return 0;
}

