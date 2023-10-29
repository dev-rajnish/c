#include <stdio.h>

int main (){
long long int num = 0 ;

  puts("Enter a integer to check even odd ");
  scanf("%lld",&num);
  
  if (num %2 == 0)
  {
    puts ("is EVEN");
  }
  else {
    puts ("is ODD");
  }

  // ==> Second Method
  puts ("--> Method 2 <--");

  num % 2 == 0 ? puts("is EVEN") : puts ("is ODD");
}
