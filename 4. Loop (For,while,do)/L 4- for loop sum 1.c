#include <stdio.h>
#include <math.h>
int main()
{
    float n,i,sum=0;
    printf("n times= ");
    scanf("%g",&n);
    for(i=1;i<=n;i++)
        printf("\n%g.%g\n",i,2*i);
        sum=sum+i+(.1*2*i);/*sum=sum+i+(.1*2*i)+sum shows same output*/
        printf("\nsum=%g\n",sum);
return 0;
}
