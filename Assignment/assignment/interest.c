#include <stdio.h>
int main()
{
    double p,n,r,si,ci;
    printf("Premium money= ");
    scanf("%lf",&p);
    printf("\nTime in year= ");
    scanf("%lf",&n);
    printf("\nPercentage rate of interest per year= ");
    scanf("%lf",&r);
    si=p*n*(r/100);
    ci=(p*pow(1+(r/100),n))-p;
    printf("\nSimple interest= %lf\n",si);
    printf("\nCompound interest= %lf\n",ci);
    return 0;
}
