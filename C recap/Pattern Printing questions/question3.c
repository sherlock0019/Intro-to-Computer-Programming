#include<stdio.h>

int main()
{
    //Pyramid pattern printing using stars
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i >= j)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
    
}