#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  puts_animate("Hello World hello world how are you" _2nl  "i am fine" _nl, 100000);
  puts_animate("R a j n i s h" _4nl _4nl , 90000);
  getchar();

  exit(0);
}
