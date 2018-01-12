#include <stdio.h>
int main()
{
    double ara[]={5,23,4,.5,6,8.9};
    double ara2[6];
    int i,j;
    for(i=0;i<6;i++)
    {
        printf("%d th element = %lf\n",(i+1),ara[i]);
    }
    for(i=0,j=5;i<6;i++,j--)
    {
        ara2[j]=ara[i];
    }

    printf("\nNow in reverse order:\n\n");

    for(j=0;j<6;j++)
    {
        printf("%d th element = %lf\n",(j+1),ara2[j]);
    }
    return 0;
}
