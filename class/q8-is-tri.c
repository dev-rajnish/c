
#include <stdio.h>

int main() {
  float ang1 = 0, ang2 = 0, ang3 = 0;

  //  angles
  printf("Enter 3 angles of Triangle : ");
  scanf("%2f %2f %2f", &ang1, &ang2, &ang3);

  if ((ang1 > 0 && ang2 > 0 && ang3 > 0) && ((ang1 + ang2 + ang3) == 180.0)) {
    puts("\nTriangle POSSIBLE .\n");

  } else {
    puts("\nTriangle Not Possible . \n");
  }

  return 0;
}
