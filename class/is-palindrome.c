#include <stdio.h>

int main() {
  long int num, original = 0, reversed = 0, counter = 0;

  printf("Enter a number to check palindrome : ");
  scanf("%ld", &num);

  original = num;

  while (num != 0) {
    reversed = (reversed * 10) + num % 10;
    num /= 10;
    counter++;
  }
  printf("Reverse = %ld \nnumber of digit = %ld \n",
         reversed, counter);

  (original == reversed) ?
    puts("is palindrome") :
    puts("is not palindrome");
}
