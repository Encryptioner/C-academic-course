#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in Fahrenheit= ");
    scanf("%g",&f);
    c=((f-32)*5)/9;
    printf("\nEqual temperature in Celsius= %g\n",c);
return 0;
}
