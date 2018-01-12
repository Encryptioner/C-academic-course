#include <stdio.h>
int main()
{
    int a[10]={5,3,2,5,6,8,3,0};
    int i,j,count=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
            if(i=a[j])
        {
            count=count++;
            if(count<=2)
            break;
        }
        printf("There are %d input of number %d\n",count,i);
    }
    return 0;
}
