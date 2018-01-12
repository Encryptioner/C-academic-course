#include <stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter row: ");
    scanf("%d",&n);
        for(a=1;a<=n;a++)
        {
            for(b=1;b<=(n-a);b++)
                printf(" ");
                for(c=1;c<=a;c++)
                    printf("* ");
                printf("\n");
        }
}
