#include<stdio.h>

int factorial(int a)
{
    int answer = 1;
    
    for (int i = 2; i <= a; i++)
    {
        answer = answer*i;
    }
    return answer;   
}


int main()
{
    //deteremine if the number is a strong number or not.

    int a, n, count = 0;
    scanf("%d", &a);
    int b = a;
    
    while (b != 0)
    {
        n = b%10;
        count = count + factorial(n);
        b = b/10;
    }

    if (count == a)
    {
        printf("%d is a strong number.", a);
    }

    else
    {
        printf("%d is not a strong number.", a);
    }
    
    return 0; 
}