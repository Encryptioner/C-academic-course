#include <stdio.h>
int main()
{
    float arr[]={6.3,5,2,4,7,639.6};
    float temp;
    int i,j;
    for(i=0;i<6;i++)
    {
        printf("%d th = %g\n",i+1,arr[i]);
    }
    for(i=0,j=5;i<6;i++,j--){

    {

        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;

    }}
    printf("\n Now\n\n");
    for(j=5;j>=0;j--)
    {
        printf("%d th = %g\n",j,arr[j]);
    }
    return 0;
}
