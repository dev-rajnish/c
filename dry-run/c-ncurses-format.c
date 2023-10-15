#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
 void ncurses_c(void);
int main(void)
{

  // ncurses_c();
  //initscr();
  //noecho();
  system("clear");
  printf("1.Printed in \"NCURSES\" waitng to \"char input\"");
  ncurses_c();


  // attroff(COLOR_PAIR(1));
  //getch();
 // clear();
  // attron(COLOR_PAIR(1));

  printf("2.Hurrah! \"You Clicked A char on keyboard\" \nDo it once more to exit");

  ncurses_c();
  // endwin();

  return 0;
}


void ncurses_c(void){
    initscr();
    noecho();
    getch();
    endwin();
//  start_color();

  //cbreak();

  //clear();

  //init_pair(1,COLOR_RED, COLOR_BLACK);

  //init_pair(1, COLOR_WHITE, COLOR_YELLOW);

  //attron(COLOR_PAIR(1));
} 
