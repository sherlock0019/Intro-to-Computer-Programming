#include<stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int area = 0, perimeter = 0;
    area = a*b;
    perimeter = 2*(a+b);

    printf("%d %d\n", area, perimeter);

    return 0;
}