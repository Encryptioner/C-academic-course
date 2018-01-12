#include <stdio.h>/*apply 1,8,2 ans different*/
#include <math.h>
int main()
{
    float a,b,c,r,x,y;
    printf("Enter a&b&c= ");
    scanf("%g%g%g",&a,&b,&c);
    r=pow(b,2)-(4*a*c);
    if(r==0){
        x=(-b)/(2*a);
        printf("\nsolve1= %g\nf",x);}
    else if(r>0){
        x=(-b+sqrt(r))/(2*a);
        printf("\nsolve1= %g\n",x);
        y=(-b-sqrt(r))/(2*a);
        printf("\nsolve2= %g\n",y);}
    else
        printf("\nImaginary solution\n");
return 0;
}
