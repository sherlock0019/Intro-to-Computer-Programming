#include<stdio.h>
#include<math.h>

int main()
{
    int a, digits = 0;
    scanf("%d", &a);
    int b = a;

    //finding the number of digits in the number entered
    while (a != 0)
    {
        digits++;
        a = a/10;
    }

    //printf("%d\n", digits);

    int decimal = 0;
    for (int i = 0; i < digits; i++)
    {
        decimal = decimal + (b%10)*(pow(2, i));
        b = b/10;
    }

    printf("%d\n", decimal);
    return 0;
}