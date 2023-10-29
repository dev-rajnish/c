#include <stdio.h>

int main() {

  float angle1 = 0, angle2 = 0, angle3 = 0;

  // 1st angle
  printf("Enter 1st angle : ");
  scanf("%f", &angle1);

  // angle 2
  printf("Enter 2nd angle : ");
  scanf("%f", &angle2);

  /// angle3
  printf("Enter 3rd angle : ");
  scanf("%f", &angle3);

  if ((angle1 > 0 && angle2 > 0 && angle3 > 0) && ((angle1 + angle2 + angle3) == 180.0)) {
    puts("\n:-> Triangle Valid \n");

  } else {
    puts("\n:-> X |  Invalid Triangle \n");

  }

  return 0;
}
