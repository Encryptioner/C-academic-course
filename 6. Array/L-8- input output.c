#include <stdio.h>
void main()
{
    int a[500000],n,i;/*more 0 in array shows problem*/
    printf("How many numbers u wanna input= ");
    scanf("%d",&n);
    if(n<=500000)
    {
        printf("Numbers:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Now the numbers:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    else
    {
        printf("Out of range");
    }
}
