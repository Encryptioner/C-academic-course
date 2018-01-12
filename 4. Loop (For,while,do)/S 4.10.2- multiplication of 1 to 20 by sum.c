#include <stdio.h>/*Have problem...*/
int main()
{
    int m,n,a;
    printf("How many multiplication u want? ");
    scanf("%d",&a);
    for(m=1;m<=a;m++)
    {
        int k=0;
        for(n=1;n<=10;n++)
        {
            k=k+m;
            printf("%d * %d= %d\n",m,n,k);
        }

        printf("\n");
    }
    return 0;
}
