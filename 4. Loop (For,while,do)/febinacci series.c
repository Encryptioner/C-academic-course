#include <stdio.h>
int main()
{
    double a=0,b=1,result=0;
    int i,n;
    printf("how many number do u wanna know of febinacci series= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=b;
        b=result;
        result=a+b;
        printf("\n%2.0lf  \n",result);
    }
    return 0;
}
