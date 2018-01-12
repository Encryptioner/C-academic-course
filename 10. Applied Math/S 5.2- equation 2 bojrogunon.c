#include <stdio.h>
int main()
{
    double a1,b1,c1,a2,b2,c2,k;
    printf("Enter 1st Equation\n");
    printf("Constant of x= ");
    scanf("%lf",&a1);
    printf("Constant of y= ");
    scanf("%lf",&b1);
    printf("\n%0.2lf x + %0.2lf y = ",a1,b1);
    scanf("%lf",&c1);
    printf("\nEnter 2nd Equation\n");
    printf("Constant of x= ");
    scanf("%lf",&a2);
    printf("Constant of y= ");
    scanf("%lf",&b2);
    printf("\n%0.2lf x + %0.2lf y = ",a2,b2);
    scanf("%lf",&c2);
    k=((a1*b2)-(a2*b1));
    if((int)k==0)/* if(k==0.0) if(k==0)or use kora jeto kintu tate floating point related problem hote pare */
    {
        printf("\nValue of x and y can not be determined.\n");
    }
    else
    {
        printf("\nx= %lf\n",(((b2*c1)-(b1*c2))/k));
        printf("\ny= %lf\n",(((a1*c2)-(a2*c1))/k));
    }
    return 0;
}
