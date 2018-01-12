#include <stdio.h>
int main()
{
    int i;
    float f;
    double d;
    long l;

    float m=0;
    printf("\n%2.3f\n",m);

    printf("Enter integer ");// for integer number
    scanf("%d",&i);
    printf("Your integer number is %d",i);

    printf("\n\nEnter a floating point number ");// for floating pointlll
    scanf("%f",&f);
    printf("Your floating point number is %f",f);
    // for double
    printf("\n\nEnter a double number ");
    scanf("%lf",&d);
    printf("Your double number is %lf",d);
    // for long
    printf("\n\nEnter a long number is ");
    scanf("%ld",&l);
    printf("Your double number is %ld",l);


    return 0;
}
