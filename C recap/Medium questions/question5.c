#include<stdio.h>

int main()
{
    //Convert digit/number to words

    int a;
    scanf("%d", &a);

    //find number of digits
    int b = a;
    int digits = 0;
    while (b != 0)
    {
        digits++;
        b = b/10;
    }

    int c = a;
    int arr[digits];
    for (int i = 0; i < digits; i++)
    {
        arr[digits-i-1] = c%10;
        c = c/10;
    }

    for (int i = 0; i < digits; i++)
    {
        printf("%d\n", arr[i]);
    }

    

    return 0;
}