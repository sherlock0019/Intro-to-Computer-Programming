#include<stdio.h>

int main()
{
    //Check whether a number can be expressed as a sum of two prime numbers
    
    int a;
    scanf("%d", &a);

    int prime[a-1];

    //assume all are primes initially
    for (int i = 0; i < a; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i <= a; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                prime[i-1] = 0;
                break;
            }
        }   
    }

    for (int i = 0; i < a; i++)
    {
        for (int k = i; k < a; k++)
        {
            if (prime[i] == 1 && prime[k] == 1)
            {
                if (i + k + 2 == a)
                {
                    printf("%d + %d = %d\n", i+1, k+1, a);
                }
                
            }
            
        }
    }

    return 0;
}