#include <stdio.h>
int main()
{
    int n;
    printf("Enter number= ");
    scanf("%d",&n);
    for(n=1;n%2==0;)
        {printf("%d even\n",n);}
return 0;
}
