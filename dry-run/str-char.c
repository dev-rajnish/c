#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "lyrics.h"


void char_animate(int for_i, const char str[], int delay_ms);

int main() {
  char word[] = /*"Hello World,\n I am Rajnish \n  Coding In \"C\" ";*/ lyrics ;
  for (int i = 0; i <= strlen(word); i++) {
    char_animate(i, word, 40000);
  }
  getchar();

  return 0;
}

void char_animate(int for_i, const char str[], int delay_ms) {
  const char *word = str;
  printf("" "%c", word[for_i]);
  fflush(stdout);
  usleep(delay_ms);
}
