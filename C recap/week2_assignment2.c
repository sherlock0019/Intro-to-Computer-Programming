#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;

    //Equation : ax + by + c = 0
    //Equation : dx + ey + f = 0

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    int x,y;
    x = ((b*f) - (c*e))/((a*e) - (b*d));
    y = ((a*f) - (c*d))/((b*d) - (a*e));

    printf("x is %d\ny is %d\n", x, y);

    return 0;
}