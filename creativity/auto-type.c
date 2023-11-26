#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]) {
  system("clear");
 
  FILE *fp = fopen (argv[1], "r");
  char words_fetched[2];
  while (fgets(words_fetched, sizeof(words_fetched), fp) != NULL) {
    printf("%s", words_fetched);
    fflush(stdout);
    system("read -sn1");
  }
  fclose(fp);

  return EXIT_SUCCESS;
}
