#include<stdio.h>
#include<math.h>

int main()
{
    //Roots of a quadratic equation

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    int delta = (b*b) - (4*a*c);

    float root1, root2;
    float cmplx1 = 0, cmplx2 = 0;

    if (delta > 0)
    {
        root1 = (-b + (sqrt(delta)))/(2*a);
        root2 = (-b - sqrt(delta))/(2*a);

        printf("Different roots\n");
        printf("Roots of the equation are : %f, %f", root1, root2);
    }

    if (delta == 0)
    {
        root1 = (-b)/(2*a);
        root2 = root1;

        printf("Identical roots\n");
        printf("Identical Root of this equation are : %f", root1);
    }

    if (delta < 0)
    {
        root1 = (-b)/(2*a);
        cmplx1 = (sqrt(-delta))/(2*a);
        root2 = root1;
        cmplx2 = -cmplx1;

        printf("Complex roots\n");
        printf("Complex roots of the equation are : %f + %fi, %f + %fi", root1, cmplx1, root2, cmplx2);
    }

    return 0;
}