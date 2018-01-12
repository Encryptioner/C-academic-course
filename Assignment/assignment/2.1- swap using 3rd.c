#include <stdio.h>
int main()
{
    float x,y,z;
    printf("Enter the value of x & y=\n\n");
    scanf("%g%g",&x,&y);
    z=x;
    x=y;
    printf("%d%d",y,z);
    return 0;
}
