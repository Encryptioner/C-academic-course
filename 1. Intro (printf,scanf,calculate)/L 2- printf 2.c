#include <stdio.h>
int main()
{
    int a,b;
    printf("your integer number is ");
    scanf("%d",&a);
    printf("Now %d %d %d %d %d",a,a,a,a,a);
    printf("\nyour integer number is ");
    scanf("%d",&b);
    printf("Now \n%d        %d\n %d      %d\n  %d    %d\n   %d  %d\n    %d%d\n    %d%d\n   %d  %d",b    ,    b,b   ,   b,b  ,  b,b , b,b,b,b,b,b , b);/*this gap after inverted coma isn't necessary*/
    return 0;
}
