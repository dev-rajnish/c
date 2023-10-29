#include <stdio.h>
int main (){
  int num = 0;
do {
  puts("Enter week days number");
  scanf ("%d" , &num);
if (num == 1){
  puts ("SUNDAY");
  }
 else if (num == 2) {
  puts ("MONDAY");
    }
  else if (num == 3){
  puts ("TUESDAY");
    }
  else if (num == 4){
  puts ("WEDNESDAY");
    }
  else if (num == 5){
  puts ("THRUSDAY");
    }
  else if (num == 6){
  puts ("FRIDAY");
    }
  else if (num == 7){
  puts ("SATURDAY");
    }
else {
puts ("Invalid input");
    }
  }
while (num <=7) ;
}
