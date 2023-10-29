/*
Write a C program to print a block F using the hash (#), where the F has a
height of six characters and width of five and four characters. And also print a
very large 'C'. Expected Output:

v######
#
#
#####
#
#
#

    ######
  ##      ##
 #
 #
 #
 #
 #
  ##      ##
    ######

*/

#include <stdio.h>

void letter_f(void) { printf("#######\n#\n#\n#####\n#\n#\n#"); }
void letter_c(void) {
  printf(

      "   ######\n"
      " ##      ##\n"
      "#\n"
      "#\n"
      "#\n"
      "#\n"
      " ##      ##\n"
      "   ######\n"

  );
}

int main() {
  letter_c();
  puts("");
  letter_f();

  return 0;
}
