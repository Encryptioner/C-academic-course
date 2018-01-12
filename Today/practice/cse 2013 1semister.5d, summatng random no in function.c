#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,a,n1,n2,arr1[50];
    printf("what is the size of array? ");
    scanf("%d",&a);
    printf("What is the upper limit of random number in array 1 : ");
    scanf("%d",&n1);
    for(i=0;i<a;i++)
    {
        //if(rand()%n1<=n1)
        {
            printf("%d\t",rand()%n1);
        }
    }
    /*for(i=0;i<a;i++)
        printf("%d\t",a[i]);*/
        return 0;
}
