
#include <stdio.h>
#include <unistd.h>
int main()
{
    int ms = 5000;
    int col = 1;
    int width = 10;
    getchar();
    for (int i = 1; i <= width; i++)
    {
        if (col > 7)
        {
            col = 1;
        }
        printf("\e[%dm", col + 30);
        col++;
        printf("%c\n\e[%dC", 53 + i, i);
        printf("\e[0m");
        fflush(stdout);
        usleep(ms);

        if (i == width)
        {
            for (int j = width ; j > 1; j--)
            {
               if (col >= 7)
                {
					col = 1;
                }
                printf("\e[%dm", col + 30);
                col++;
                printf("%c\e\n[%dC", j + 34, j);
                printf("\e[0m");
                fflush(stdout);
                usleep(ms);
                // ms=+5000;
            }
            i = 0;
        }
    }
}