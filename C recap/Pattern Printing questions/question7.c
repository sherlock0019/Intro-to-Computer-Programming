#include<stdio.h>

int main()
{
    //Floyd's triangle

    int n;
    scanf("%d", &n);
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
        
    }
    
    return 0;
}