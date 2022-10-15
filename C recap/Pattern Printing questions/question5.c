#include<stdio.h>
#include<math.h>

int main()
{
    //Palindrome half pyramid pattern using numbers
    
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (int k = i-1; k >= 1; k--)
        {
            printf("%d", k);
        }
        
        printf("\n");
        
    }
    
}