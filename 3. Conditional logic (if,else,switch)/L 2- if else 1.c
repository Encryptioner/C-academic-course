#include<stdio.h>
int main()
{
    float a;
    printf("Enter the number= ");
    scanf("%f", &a);
    if(a<20)
    {
        printf("a is less than 20");
    }
    else
    {
        printf("a is not less than 20");
    }
    printf("\nValue of a is %f\n", a);
    return 0;
}
