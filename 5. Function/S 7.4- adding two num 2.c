#include <stdio.h>

double add(double ,double );/*or double add(double n1,double n2);  or double add(double num1,double num2);*/

int main()
{
    /*double d;
    //d=(1*50)/3;//for  this answer does not allow any number after decimal. But
    d=(1*50.0)/3;// or d=(1.0*50)/3 or d=(1*50)/3.0 answer gives the right output
    //cout<<d<<endl;
    printf("%f\n",d);//for double in c++ %lf,%llf is not allowed. But it is allowed in c*/

    double a,b,c;
    printf("Enter 1st number= ");
    scanf("%lf",&a);
    printf("Enter 2nd number= ");
    scanf("%lf",&b);
    c=add(a,b);
    printf("\n%lf\n",c);
    return 0;
}

double add(double num1,double num2)
{
   double sum;
   sum=num1+num2;
   return sum;
}
