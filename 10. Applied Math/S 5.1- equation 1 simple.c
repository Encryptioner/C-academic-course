#include <stdio.h>
int main()
{
    double xp,xm;
    printf("Enter the value of x+y= ");
    scanf("%lf",&xp);
    printf("Enter the value of x-y= ");
    scanf("%lf",&xm);
    printf("\nx= %0.2lf\n",((xp+xm)/2));
    printf("\ny= %0.2lf\n",((xp-xm)/2));
    return 0;
}
