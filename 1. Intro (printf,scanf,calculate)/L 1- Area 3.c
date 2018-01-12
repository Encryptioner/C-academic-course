#include <stdio.h>
#include <math.h>
int main()
{
    float pi=3.1415926,r,A;//watch L-1 area2 for more way
    //pi = 3.14;//or pi=3.14f; this value of pi will be considered. 1st value is now valueless
    printf("radius=");
    scanf("%f",&r);
    A=pi*pow(r,2);
    printf("Area= %0.2f",A);/*0.2f means it will count 2 digit after point.*/
    return 0;
}



