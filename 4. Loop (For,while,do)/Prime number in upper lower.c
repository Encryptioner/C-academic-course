#include<stdio.h>

int main()
{
    int upper_limit,lower_limit,i,j,p;
    printf("Enter lower limit: ");
    scanf("%d",&lower_limit);
    printf("\nEnter upper limit: ");
    scanf("%d",&upper_limit);
    for(i=lower_limit;i<=upper_limit;i++)
    {
        p=1;

        for(j=2;j<=lower_limit;j++)
        {
            if(i%j==0)
               {
                p=0;
                break;
               }
        }
        if(p==1) /* if(p)  */
        {
            printf("\n%d",i);
        }
    }


   return 0;
}

