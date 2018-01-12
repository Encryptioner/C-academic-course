#include <stdio.h>
int main()
{
    struct customer
    {
        int id;
        double balance;
        char name[20];
        char address[50];
    }a[100];
    int i,j,n;
    int t;
    printf("How many information of customer u wanna input: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nCustomer id no %d = ",i+1);
        scanf("%d",&a[i].id);
        printf("\nCustomer name of no %d = ",i+1);
        scanf("%[^\n]",a[i].name);
        printf("\nCustomer address of id no %d = ",i+1);
        scanf("%s",a[i].address);
        printf("\nCustomer balance no %d = ",i+1);
        scanf("%lf",&a[i].id);
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(a[i].balance>a[j].balance)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }*/
    for(i=0;i<n;i++)
    {
        printf("\ncustomer id %d= %d\n",i+1,a[i].id);
        printf("\ncustomer name %d= %s\n",i+1,a[i].name);
        printf("\ncustomer address %d= %s\n",i+1,a[i].address);
        printf("\ncustomer balance %d= %lf\n",i+1,a[i].balance);
    }
    return 0;
}
