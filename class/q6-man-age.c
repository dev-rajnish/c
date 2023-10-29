#include <stdio.h>

int main()
{
    short age = 1;
    printf("Range 1 to 200 To get expected result \n"
           "Your age ? : ");
    scanf("%hd", &age);

    if (age < 18)
    {
        puts("You are Teenager");
    }
    else if ((age >= 18) && (age <= 30))
    {
        puts("You are Adult");
    }
    else if (age > 30 && age <= 50)
    {
        puts("You are Young man");
    }
    else if (age > 50 && age <= 100)
    {
        puts("You are Senior citizen");
    }
    else if (age > 100)
    {
        puts("You are nature's miracle");
    }

    return 0;
}
