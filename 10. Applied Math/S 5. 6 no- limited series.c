#include <stdio.h>//How??
int main()
{
    double a1,a2,r,d,sum,i;
    int n;
    printf("Enter 1st element of series= ");
    scanf("%lf",&a1);
    printf("Enter 2nd element of series= ");
    scanf("%lf",&a2);
    d=a2-a1;
    printf("General difference= %lf\n",d);
    printf("Number of element= ");
    scanf("%d",&n);
    r=a1+(n-1)*d;
    printf("Last element= %lf\n",r);
    for(i=a1;sum=0,i<=(r+(r/100000));i=i+d)
    {
        //printf("% 0.2lf + ",i);
        sum = sum + i;
        printf("= %0.3lf",sum);
    }
    printf("= %0.3lf",sum);
}
