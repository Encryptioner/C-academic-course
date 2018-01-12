#include <stdio.h>
int main()
{
    int a[5]={5,10,15,20,25};
    int i,j,m;
    i=++a[1];
    j=a[1]+1;
    m=a[1]++;
    printf("%d %d %d",i,j,m);
    return 0;
}
