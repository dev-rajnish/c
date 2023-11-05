
#include <stdio.h>

int main()
{
    long long num = 0.0

    printf("Enter Number To Check Divisibility : ");
    scanf("%lld", &num);

    if (num % 3 == 0)
    {
        if (num % 5 == 0)
        {
            puts("\nDivisible by 3 . \n"
                 "Divisible by 5 also . \n"
                 "Divisible by Both 3 and 5 .\n");
        }
        if (num % 3 == 0 && num % 5 != 0)
        {
            puts("\nDivisible by only 3 . \n");
        }
    }
    else if (num % 5 == 0)
    {
        puts("\nDivisible by 5 only . \n");
    }
    else
        puts("\nNot divisible by any 3 , 5 or 3 and 5 . \n");

    return 0;
}
