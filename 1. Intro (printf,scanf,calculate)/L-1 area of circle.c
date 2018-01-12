#include <stdio.h>
#include <math.h>
int main()
{
    int value;
    float r,A,pi=3.1416;
    printf("Enter radius= ");
    value=scanf("%f",&r);
    printf("value= %d",value);
    printf("%0.2f\n",r);
    A=pi*pow(r,2);
    printf("Area of circle= %g",A);
return 0;
}
