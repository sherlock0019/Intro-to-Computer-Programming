#include<stdio.h>

int main()
{
    //swapping two integers without third variable
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d", a, b);
    return 0;

}
