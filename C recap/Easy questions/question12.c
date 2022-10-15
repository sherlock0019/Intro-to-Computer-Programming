#include<stdio.h>

int main()
{
    //Find the factors of a number.
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if(a%i == 0)
        {
            printf("%d is a factor.\n", i);
        }
    }
    
    return 0;
}