#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers=\n");
    scanf("%g %g %g",&a, &b, &c);
    if(a>b & a>c)
        printf("\n%g is largest",a);
    else if(b>a & b>c)
        printf("\n%g is largest",b);
    else
        printf("\n%g is largest",c);
return 0;
}
