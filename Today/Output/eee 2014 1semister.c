#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},i;
    for(i=0;i<5;i++)
        if(a[i])
        printf("%d %d\n",a[i],a[i]+1);
    return 0;
}
