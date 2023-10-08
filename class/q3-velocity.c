#include <stdio.h>
//#include <conio.h>

//void main(){}
//clrscr();

int main (void){

  double u, v, t, displacement, velocity;
  puts("What are the followings.");
  
  puts("Initial Position (in meters) ?");
  scanf("%lf", &u);

  puts("Final Position (in meters) ?");
  scanf("%lf", &v);

  puts("Time (in seconds) ?");
  scanf("%lf", &t);

  displacement = v - u ;
  printf("Displacement = %.2lfm", displacement);

  velocity = displacement/t;
  printf("\nVelocity = %.2lfm/s", velocity);
  
  //getch();
  while( getchar() != '\n');
  getchar();
  return 0;
}
