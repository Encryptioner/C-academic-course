#include <stdio.h>
int main()
{
    int n,a,sum=0,count=0;
    printf("Enter Number of constant= ");
    scanf("%d",&n);
    while(count<=n)
    {
        printf("Enter constant= ");
        scanf("%d",&a);
        count++;
        printf("The value of constant= ",a);
    }
}
