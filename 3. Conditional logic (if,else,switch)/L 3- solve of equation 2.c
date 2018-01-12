#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x;
    printf("a= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    float e=pow((a*x),2)+b*x+c;
    float d=pow((pow(b,2)-4*a*c),0.5);
    float r1=-b+(d/2);
    float r2=-b-(d/2);
    if(d==0)
    {
        printf("root = %f",(-b/(2*a)));
    }
    else if(d>0)
    {
        printf("root = %f & %f",r1,r2);
    }
    else
        printf("imaginary");

}
