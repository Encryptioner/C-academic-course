#include <stdio.h>//Highest n=100//
int main()
{
    int i,n;
    double a[100];
    printf("How many numbers: ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<n;i++)
        printf("%8.0lf\t\n\n",a[i]);
    return 0;
}
