#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// function
void file_open(char file_name[], int speed);
void char_animate(const char str[], int ms);

int main() {

  file_open("/home/rajnish/data/codes/c/asset/me.dot.txt", 100);
  getchar();
}

void file_open(char file_name[], int print_delay) {
  char str[10];
  FILE *file = fopen(file_name, "r");
  if (file != NULL) {
    while (fgets(str, 10, file) != NULL) { // printf("%zu",sizeof(str));
      puts_animate(str, print_delay);
    }
  } else {
    perror("Error opening ");
    exit(1);
  }
  fclose(file);
}
