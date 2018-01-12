#include <stdio.h>
int main()
{
    int i,ara[3];
    printf("Enter aray from 1st order to last order\n");
    for(i=0;i<3;i++)
    {
        printf("%d th element: ",i+1);
        scanf("%d",&ara[i]);
    }
    printf("\nShowing aray from last order to 1st order\n\n");
    for(i=3;i>0;i--)
    {
        printf("%d th element: %d\n",i,ara[i-1]);
    }
    return 0;
    /*int j;
    double aray[3]={6.3,5.2,9};
    printf("Enter aray from 1st order to last order\n");
    for(i=0;i<3;i++)
    {
        printf("%d th element: ",i+1);
        scanf("%d",&ara[i]);
    }*/
}
