#include <stdio.h>//if i use math.h it will show warning
int main()
{
    float c,f;
    printf("Celsius value= ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("ferenhite value= %f",f);
    printf("\nNow, ferenhite value= ");
    scanf("%f",&f);
    c=(5*(f-32))/9;
    printf("Celsius value= %f",c);
    return 0;
}
