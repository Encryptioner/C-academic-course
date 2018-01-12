#include <stdio.h>
void main()
{
    int i,j,x=0;
    for(i=0;i<5;++i)
        for(j=0;j<i;++j)
    {
        x=(i+j-1);
        printf("%d\n",x);
    }
    printf("\nx = %d",x);
}
