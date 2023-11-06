#include <stdio.h>
#include <unistd.h>
int main ()
{
  puts("press enter to continue");
  getchar();
  for (int i = 65 ; i < (97+26);i++)
  {
    printf("\t %c\n",i);
    usleep(100000);
  }
}
