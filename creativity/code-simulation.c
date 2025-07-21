#include  <stdio.h>
#include <unistd.h>

void spc() {
   int space = 10;

   while(space>0){
   for( int i = 2; i<=space; i++){
     printf("\x1B[%im %c \x1B[0m",i+28,i+100);
     printf("\n\x1B[%iG",i);
     usleep( 20000);

     if (i==space){
       for( int j = space; j<=space; j--){
     printf("\x1B[%im %c \x1B[0m",j+28,j+50);
       printf("\n\x1B[%iG",j);
       usleep( 20000);
       if (j==0)
         j=space+4;
      }
   }
}
}
}
int main() {
 // print_char();
  spc();
}

