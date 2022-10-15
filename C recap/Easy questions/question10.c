#include<stdio.h>

int main()
{
    //Determine if the number is a prime number or not
    int a;
    int prime = 1;
    scanf("%d", &a);

    for (int i = 2; i < a; i++)
    {
        if(a%i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime == 1)
    {
        printf("%d is a prime number.", a);
    }

    else
    {
        printf("%d is a composite number.", a);
    }
    
    return 0;

}