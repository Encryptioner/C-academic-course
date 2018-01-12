#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,*b,*max;
    a=(int *)malloc(sizeof(int));
    b=(int *)malloc(sizeof(int));

    printf("a= ");
    scanf("%d",a);
    printf("b= ");
    scanf("%d",b);

    if(*a>*b)
        max=a;
    else
        max=b;
    printf("Maximum= %d",*max);
    return 0;
}
