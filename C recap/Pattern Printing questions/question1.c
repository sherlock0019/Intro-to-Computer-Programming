#include<stdio.h>

int main()
{
    //Solid rectangular star pattern
    
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}