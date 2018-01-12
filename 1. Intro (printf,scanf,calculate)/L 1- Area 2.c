#include <stdio.h>
#include <math.h>
void main()
{
    float r,A;
    printf("radius=");
    scanf("%g",&r);
    A=3.14*r*r;
    printf("area= %g",A);

    printf("\nradius=");
    scanf("%g",&r);
    A=3.14*pow(r,2);/*math.h na dile error hobe..*/
    printf("area= %g",A);
}
