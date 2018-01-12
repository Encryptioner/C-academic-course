#include <stdio.h>
int main()
{
    void fun(int,int[]);
    int ar[]={1,2,3,4};int i;
    fun(4,ar);
    for(i=0;i<4;i++)
        printf("%d",ar[i]);
    return 0;
}
void fun(int n;int ar[])
{
    int *p=0;int i=0;
    while(i++<n;p=&ar[i];)
       *p=0;
}
