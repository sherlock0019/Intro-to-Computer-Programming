#include<stdio.h>

int main()
{
    //find HCF and LCM of 2 numbers
    
    int a,b;
    scanf("%d %d", &a, &b);

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

    printf("HCF - %d, LCM - %d", hcf, lcm);
}