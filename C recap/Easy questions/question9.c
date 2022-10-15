#include<stdio.h>

int main()
{
    //fibonnaci sequence upto 100

    // 0 1 1 2 3 5 8 13 21 34 55 89
    int a, b, c, n;
    a = 0;
    b = 1;

    while(n < 100)
    {
        n = a + b;
        c = b;
        b = n;
        a = c;
        if(n<100)
        {
            printf("%d\n", n);  
        }
        
    }

    return 0;
}