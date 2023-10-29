/*
 *
 *
 */

#include <stdio.h>
#include <unistd.h>

void str_test(void); // line 20
void c_code(void);   // line 29

int main() {

 // str_test();
  c_code();

  return 0;
}

void str_test(void) {
  char str_test[] = "dfgjhklfdshgf ghdfuksghlfugp ufhgls \n";
  for (int i = 0; i <= sizeof(str_test); i++) {
    printf("%c", str_test[i]);
    fflush(stdout);
    usleep(100000);
  }
}

void c_code(void) {
  char ccode[] = ""
                 "#include <stdio.h>\n"
                 "#include <unistd.h>\n\n"

                 "int main ()\n"
                 "{\n\n"

                 "printf (\"Hello World\") ;\n\n"

                 "return 0 ;\n\n"
                 "}\n"
      ;
  for (int i = 0; i <= sizeof(ccode); i++) {
    printf("%c", ccode[i]);
    fflush(stdout);
    usleep(100000);
  }
}
