#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  system("clear");
  int r = 0;
  for (r=0; r<3; r++) {
    puts("A");
    getchar();
    system("clear");
      for (r=1; r<3; r++) {
         puts("B");
         getchar();
         system("clear");
          for (r=2; r<3; r++){
             puts("C");
      }
    }
  }
}
