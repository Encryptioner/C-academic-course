#include  <stdio.h>
int main()
{
    int i,j;
    float n[10];
    for(i=0;i<10;i++)
    {
        n[i]=i+100+0.1*i;
    }
    for(j=0;j<10;j++)
    {
        printf("Element[%d]=%g\n",j,n[j]);
    }
    return 0;
}
