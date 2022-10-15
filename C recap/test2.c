#include<stdio.h>

int main()
{
    int a, b, c;
    a = 5;
    b = 3;
    printf("%d %d\n", a, b);

    //inverting the values of a and b
    
    //the value of a gets assigned to c
    c = a;

    //the value of b gets assigned to a
    a = b;

    //the value of c, which is a, now gets assigned to b
    b = c;
    printf("%d %d\n", a, b);
    
    return 0;
}