#include <stdio.h>
int d = 3456;
int addfn( int a , int b ) ;

int main( void )
{
  int a,b;
  scanf( "%d %d" , &a , &b  ) ;
  printf("Sum is %d", addfn( a , d ) ) ;
}

int addfn( int a , int b )
{


  return (a+b);
}
