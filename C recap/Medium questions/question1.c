#include<stdio.h>

int main()
{
    //Prime numbers in a given range

    int a, b, n;
    scanf("%d %d", &a, &b);

    n = b - a +1;
    int prime[n];
    printf("Prime numbers between %d-%d\n\n", a, b);

    for (int i = 0; i < n; i++)
    {
        prime[i] = 1;
    }

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                prime[i-a] = 0;
                break;
            }
        }   
    }  

    for (int i = 0; i < n; i++)
    {
        if(prime[i] == 1)
        {
            printf("%d is a prime number.\n", a+i);
        }

        else
        {
            printf("%d is not a prime number.\n", a+i);
        }
    }

    return 0;
    
}