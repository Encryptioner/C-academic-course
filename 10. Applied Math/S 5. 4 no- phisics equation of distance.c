#include <stdio.h>
int main()
{
    double u,a,t,v,s;
    printf("Enter primary velocity in meter= ");
    scanf("%lf",&u);
    printf("Enter acceleration in meter per second= ");
    scanf("%lf",&a);
    printf("Enter time of running in second= ");
    scanf("%lf",&t);
    v=u+a*t;
    s=v*2*t;
    printf("\nDistance covered in 2t time= %lf m\n",s);
    return 0;
}
