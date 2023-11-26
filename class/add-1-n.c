/*
 * Add Number 1 to n.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, counter = 1;
  long sum = 0;
  FILE *addfile = fopen("add.txt", "a+");

  printf("Enter number till you want to add starting from 1 : ");
  scanf("%d", &n);

  while (counter != n + 1) {
    sum += counter;
    printf("%d", counter);
    fprintf(addfile, "%d", counter);
    if (counter < n) {
      printf(" + ");
      fprintf(addfile, " + ");
    }
    counter++;
  }
  printf(" = %ld \n", sum);
  fprintf(addfile, " = %ld \n\n-> ", sum);
  rewind(addfile);

  char addfile_line[3];
  while (fgets(addfile_line, sizeof(addfile_line), addfile) != NULL) {
    printf("%s", addfile_line);
    fflush(stdout);
    system("read -sn1");
  }
  fclose(addfile);

  return 0;
}
