
#include <stdio.h>

#define RED "\e[1;31m"
#define GRN "\e[1;35m"
#define COL_Z "\e[0m"


void is_leap_m1(int year) ; // Line 25

void is_leap_m2(int year) ; // Line 46

int main() {

  int year = 0;

  printf("Enter Year To Check leap or Not : ");
  scanf("%d", &year);

  is_leap_m1(year);

  puts("M E T H O D 2");

  is_leap_m2(year);
}

void is_leap_m1(int year) {

  if (year >= 1900 && year <= 2100) {
    if (year % 4 == 0) {
      if (year % 100 != 0) {
        printf("%d is " GRN "leap year" COL_Z " \n", year);
      } else if (year % 400 == 0) {
        printf("%d is leap year \n", year);
      } else {
        printf("%d is not leap year \n", year);
      }
    } else {
      printf("%d is" RED " not leap year " COL_Z " \n", year);
    }
  } else {
    printf("Invalid year \n");
  }
}

void is_leap_m2(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("%d is leap year \n", year);
  } else {
    printf("%d is not leap year \n", year);
  }
}


