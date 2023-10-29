
#include <stdio.h>

#define RED "\e[1;31m"
#define GRN "\e[1;35m"
#define COL_Z "\e[0m"
void isLeap(int a);
int main()
{
    int year = 0;

    printf("Enter Year To Check leap or Not : ");
    scanf("%d", &year);

    //method 1
    /**/

    if (year >= 1900 && year <= 2100)
    {
        if (year % 4 == 0)
        {
            if (year % 100 != 0)
            {
                printf("%d is " GRN "leap year" COL_Z " \n", year);
            }
            else if (year % 400 == 0)
            {
                printf("%d is leap year \n", year);
            }
            else
            {
                printf("%d is not leap year \n", year);
            }
        }
        else
        {
            printf("%d is" RED " not leap year " COL_Z " \n", year);
        }
    }
    else
    {
        printf("Invalid year \n");
    }

    // method 2
    /*       */

    puts("\e[1;34m Method 2" COL_Z);

    isLeap(year);
}

void isLeap(int a)
{
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    {
        printf("%d is leap year \n", a);
    }
    else
    {
        printf("%d is not leap year \n", a);
    }
}
