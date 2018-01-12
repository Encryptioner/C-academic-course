#include <stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("Give number: ");
    scanf("%f %f", &x, &y);
    printf("\n\aprocessed by ceil function: %f", ceil(x));
    printf("\nprocessed by fabs function: %f", fabs(x));
    printf("\nprocessed by cos function: %f", cos(x));//here x is in radians
    printf("\nprocessed by log function: %f", log10(x));
    printf("\nprocessed by ln function: %f", log(x));
    printf("\nprocessed by exp function: %f", exp(x));
    printf("\nprocessed by square root function: %f", sqrt(x));//here x is >=0
    printf("\nprocessed by power function: %f", pow(x,y));
    return 0;
}

