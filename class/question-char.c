#include <ctype.h>
#include <stdio.h>
void is_vowel_fn1(const char ch) {
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {

    puts("Vowel");
  } else
    puts("not vowel ");
}

void is_vowel_fn2(const char ch) {
  char ch_s = tolower(ch);
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

    puts("Vowel");
  } else
    puts("not vowel ");
}

int main() {
  char ch;
  printf("Enter a alphabet : ");

  scanf("%c", &ch);

  puts("Method_1");
  is_vowel_fn1(ch);

  puts("Method 2");
  is_vowel_fn2(ch);
}
