#include <stdio.h>
// #include <stdlib.h>

int main (){
  double a, b; // char op;
  puts("Enter two Number Like a+b or a-b:");
  scanf("%lf %lf",&a,&b);
  /*
    * Output Of Scanf in %d%d
    * scanf doesnot give a fuck about Number of space in control string
    * scanf doesnot Count Space - Single, Multiple, or No 
    * Any character in between matters  not space
    * 1 input --> Right ## Scanf Seperator  
    * a+b , a-b , a b , a -b , a<ENTER>b , a<ENTER>-b
    * Wrong -->
    * a,b
  */
  //system("clear");
  printf("You Entered %lf and %lf To Add\nso\n%lf \"+\" %lf = ",a,b,a,b);
  printf("= %.3lf\v",a+b);
}
