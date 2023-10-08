#include <stdio.h>
//#include <conio.h>

//void main(){}
//clrscr();

int main (void){

  // simple interest = principle * rate * time / 100.00
  double si, p, r, t;

  puts("Enter the followings.");

  puts("principle amount ?");
  scanf("%lf", &p);

  puts("Rate of interest ?");
  scanf("%lf", &r);

  puts("Time period in year(s) ?");
  scanf("%lf", &t);

  si = (p * r * t)/100.00;
  printf("S.I. =  %.2lf %%", si);
  
  //getch();
  while (getchar() != '\n'); 
  getchar();
  return 0;
}
