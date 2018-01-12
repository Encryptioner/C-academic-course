#include <stdio.h>
#include <math.h>
int main()
{
    float a,x,z,pi=3.141592654;
    printf("Enter angle in degree= ");
    scanf("%g",&a);
    x=(pi*a)/180;/*x=equivalent radian value of angle a*/
    printf("\nsin(%g) = %g\n",a,sin(x));
    printf("\ncos(%g) = %g\n",a,cos(x));
    printf("\ntan(%g) = %g\n",a,(sin(x)/cos(x)));
    printf("\ncosec(%g) = %g\n",a,(1/sin(x)));
    printf("\nsec(%g) = %g\n",a,(1/cos(x)));
    printf("\ncot(%g) = %g\n",a,(cos(x)/sin(x)));
return 0;
}
