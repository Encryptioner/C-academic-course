#include <stdio.h>
int main()
{
    int a[5]={1,2,3},i=0;/*a[3,4]= 0, a[5 to 9]=gurbage*/
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
