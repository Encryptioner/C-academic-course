#include <stdio.h>//??
int main()
{
    int a,b,c,r,n;
    printf("Enter column= ");
    scanf("%d",&n);
    r=n+2;
    for(a=1;a<=r;a++)
    {
        for(b=1;b<=r-a;b++)
        {
            printf(" ");
            for(c=1;c<=(2*a)-1;c++)
            {
                if(c%2==0)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }

    }
}
