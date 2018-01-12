#include <stdio.h>
int main()
{
    int a,b,i;
    printf("Enter Number a&b= ");
    scanf("%d%d",&a,&b);
    printf("Number between %d& %d :\n\n",a,b);
    for(i=a+1;i<b;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
