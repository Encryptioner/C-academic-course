#include <stdio.h>
int main()
{
    double num1,num2;
    char a='+',b='-',c='*',d='/';
    printf("Enter two number= ");
    scanf("%lf%lf",&num1,&num2);
    printf("%lf %c %lf = %lf\n", num1, a, num2, num1+num2);
    printf("%lf %c %lf = %lf\n", num1, b, num2, num1-num2);
    printf("%lf %c %lf = %lf\n", num1, c, num2, num1*num2);
    if(num2==0)
    {
        printf("%lf %c %lf = 0.00\n", num1, d, num2);
    }
    else
    {
        printf("%lf %c %lf = %lf\n", num1, d, num2, num1/num2);
    }
    return 0;
}
