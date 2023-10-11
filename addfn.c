#include <stdio.h>

int addfn( int a , int b ) ;

int main( void )
{
  int a,b;
  scanf( "%d %d" , &a , &b  ) ;
  printf("Sum is %d", addfn( a , b ) ) ;
}

int addfn( int a , int b )
{
  return (a+b);
}
