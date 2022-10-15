#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main()
{
    //Area of a circle
    
    double areaOfCircle;
    int radiusOfCircle = 0;
    
    scanf("%d", &radiusOfCircle);

    areaOfCircle = PI*pow(radiusOfCircle, 2);
    printf("The area of the circle is %f\n",areaOfCircle);

    return 0;
}