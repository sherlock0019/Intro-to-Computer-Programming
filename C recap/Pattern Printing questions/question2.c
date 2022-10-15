#include<stdio.h>

int main()
{
    //Hollow rectangular star pattern
    
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i > 0 && i < rows-1 && j > 0 && j < columns-1)
            {
                printf(" ");
            }  

            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}