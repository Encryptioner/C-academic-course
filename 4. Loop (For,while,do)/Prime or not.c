#include <stdio.h>
int main()
{
    int i,j,n;
    printf("What number u want to judge prime or not? ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\nnot prime\n");
            break;
        }
    }
    if(i==n)
    {
        printf("\nprime\n");
    }
}
