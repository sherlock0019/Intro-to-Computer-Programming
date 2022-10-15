#include<stdio.h>

int main()
{
    // number of digits in a number

    int a, digits;
    scanf("%d", &a);

    while(a != 0)
    {
        a = a/10;
        digits++;
    }

    printf("%d", digits);
    return 0;
}