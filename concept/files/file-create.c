#include <stdio.h>

int main() {

  FILE *txtfile = fopen("som.txt", "a");
  if (txtfile == NULL)
    perror("Error creating");

  fprintf(txtfile, "Hello world %d ", 8 * 9);
  fclose(txtfile);

  return 0;
}
