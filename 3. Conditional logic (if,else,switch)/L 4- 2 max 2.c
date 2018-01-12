#include <stdio.h>
int main()
{
    int a,b,max;
    printf("Enter value of a&b= ");
    scanf("%d %d", &a , &b);
    max=(a>b) ? a:b;
    printf("\nMaximum number is %d", max);
return 0;
}
