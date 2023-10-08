#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @retn
int main(int argc, char *argv[]) {

  long long int num1 = atoll(argv[1]);
  long long int num2 = atoll(argv[2]);

  printf("  %lld + %lld = %lld \a", num1, num2, num1 + num2);
  exit(0);
}
