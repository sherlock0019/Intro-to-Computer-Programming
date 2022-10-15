#include<stdio.h>

int LCM(int a, int b)
{
    int hcf = 0;
    
    if(a<b)
    {   
        for(int i = 2; i <= a; i++)
        {
            if(a%i == 0 && b%i == 0)
            {
                hcf = i;
            }

            else
            {
                hcf = 1;
            }
        }
    }

    else
    {
        for(int i = 2; i <= b; i++)
        {
            if(a%i == 0 && b%i == 0)
            {
                hcf = i;
            }

            else
            {
                hcf = 1;
            }
        }
    }

    int lcm;
    lcm = (a*b)/hcf;

    return lcm;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d/%d + %d/%d ", a, b, c, d);

    int h = LCM(c, d);

    int num = ((h/b)*a) + ((h/d)*c);

    printf("Sum of the two fractions is : %d/%d", num, h);

    return 0;
}