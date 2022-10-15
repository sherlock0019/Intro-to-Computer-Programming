#include<stdio.h>

int main()
{

    //Program to Reverse a Number
    int a, digits;
    scanf("%d", &a);
    int b; 

    b = a;

    while(b != 0)
    {
        b = b/10;
        digits++;
    }

    b = a;
    int digit_order[digits-1];

    for(int i = 0; i < digits; i++)
    {
        digit_order[i] = b%10;
        b = b/10;
    }

    for (int i = 0; i < digits; i++)
    {
        printf("%d", digit_order[i]);
    }
    

    return 0;
}