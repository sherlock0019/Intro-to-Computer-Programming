#include<stdio.h>

int main()
{
    //Greatest of three numbers

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int greatest;

    if(a>b)
    {
        greatest = a;
    }

    else
    {
        greatest = b;
    }

    if(greatest < c)
    {
        greatest = c;
    }

    printf("greatest number is %d", greatest);
    return 0;
}