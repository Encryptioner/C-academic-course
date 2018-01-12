#include <stdio.h>//why??
int main()
{

    double choi;
    printf("To convert celsius to farenheit press 1 :D\nTo convert farenheit to celsius press 2 :P -> ");
    scanf("%lf",&choi);

        printf("\nTemperature= %lf\n",convert(choi));/*if i use %d ans comes but if i use %lf ans comes 0.0000 */

    return 0;
}
int convert(double choice)
{
    double c,f;
    if(choice==1)
    {
        printf("\n:D convert celsius to farenheit:\n\nEnter temperature in celsius= ");
        scanf("%lf",&c);
        f=1.8*c+32;
        printf("\nNow, temperature in farenheit= %lf\n",f);
        return (f);
    }
    else if((int)choice==2)
    {
        printf("\n:D convert farenheit to celsius:\n\nEnter temperature in farenheit= ");
        scanf("%lf",&f);
        c=(f-32)/1.8;
        printf("\nNow, temperature in celsius= %lf\n",c);
        return (c);
    }
    else
    {
        printf("\nPlease command after reading instruction\n\n");
        return main();
    }
}
