#include <stdio.h>
int main()
{
    float a,b,c,sum=0,average=0;
    printf("Enter three numbers= \n");
    scanf("%g%g%g",&a,&b,&c);
    sum=a+b+c;
    printf("\nSummation of %g, %g and %g is %g\n",a,b,c,sum);
    average=(sum/3);
    printf("\nAverage of %g, %g and %g is %g\n",a,b,c,average);
    return 0;
}
