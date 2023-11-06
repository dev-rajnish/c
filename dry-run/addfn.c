#include <stdio.h>

int addfn( int a , int b ) ;

int main()
{
  int a,b;
  printf("Enter 2 num to add : ");
  scanf( "%d %d" , &a , &b  ) ;

  printf("Sum is %d", addfn( a , b ) ) ;
  
  return 0;
}

int addfn( int a , int b )
{


  return (a+b);
}
