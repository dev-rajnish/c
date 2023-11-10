#include <stdio.h>

int main() {
  long int num = 0, is_prime = 0, i = 2;
 
  printf("Enter a number to check prime or not : ");
  scanf("%ld", &num );

  while (i <= num/i) {

    if (num % i == 0) {
      is_prime = 1;
      break;
    }
    i++;
  }
  printf ("num = %ld\ni = %ld\n",num, i);
  if (is_prime == 0) {
    puts("\n|--> is prime.");
  } else {
    puts("\n|--> is not prime");
  }

  return 0;
}
