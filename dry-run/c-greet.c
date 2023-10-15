#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {

  system("clear");
  
  //print firstNAME ONLY
  if (argc==2)
  {
  printf("Hello,%s", argv[1]); 
  exit(1);
  }
  else
  {
  //print FullName
  printf("hello, %s %s\n", argv[1], argv[2]);
  exit(2);
  }
  
    getchar();
  // system("ls");
}
