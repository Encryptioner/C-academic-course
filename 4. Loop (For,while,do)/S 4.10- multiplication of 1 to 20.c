#include <stdio.h>
int main()
{
    int m,n;
    for(m=1;m<=2000;m++)
    {
        for(n=1;n<=10;n++)
           printf("%d * %d = %d\n",m,n,m*n);
        printf("\n");
    }
    return 0;
}
