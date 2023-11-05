#include <ctype.h>
#include <stdio.h>

int alpha_type_fn(const char ch) {

  int alpha_type = 0;

  char ch_s = tolower(ch);
  if (ch_s == 'a' || ch_s == 'e' || ch_s == 'i' || ch_s == 'o' || ch_s == 'u') {

    // 5 means vowel
    // 2 means semivowel
    // 1 means consonant
    alpha_type = 5;
  } else if (ch == 'w' || ch == 'y') {
    alpha_type = 2;

  } else {
    alpha_type = 1;
  }

  return alpha_type;
}

int main() {
  /*
   * Accepts a chracter
   */
  unsigned char ch;
  printf("Enter a alphabet : ");
  scanf("%c", &ch);
  /*
   *
   */
  int alpha_type = alpha_type_fn(ch);
  if ( ! (ch <= 'a' && ch >= 'z')) {
    if (alpha_type == 5) {
      puts("Vowel");
    } else if (alpha_type == 2) {
      puts("Semi-vowel");
    } else if (alpha_type == 1) {
      puts("Consonants");
    } else
      puts("you have Entered invalid alphabet");
  }
}
