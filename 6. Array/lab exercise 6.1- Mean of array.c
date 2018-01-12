#include <stdio.h>
#include <math.h>
#define N 500000


int main()

{
    int n,i;
    float sum=0,u,num=0,array[N];

    printf("How many numbers u wanna input= ");
    scanf("%d",&n);
    if(n>0&&n<N)
    {
        printf("Now enter number:\n");
        for(i=1;i<=n;i++)
        {
            scanf("%f",&array[i]);
        }
        printf("Now check the number:\n");
        for(i=1;i<=n;i++)
        {
            printf("%10.4f\t",array[i]);
        }
         printf("\nNOw,\n");
        for(i=1;i<=n;i++)
        {
            sum=sum+array[i];
        }
        u=(sum/n);
        printf(" Sum is %10.4f\n",sum);
        printf("Average is %10.4f\n\n",u);
        for(i=1;i<=n;i++)
        {
            printf("Square of (%5.4f - %5.4f) is %6.4f\n",array[i],u,(pow((array[i]-u),2)));
            num=num+(pow((array[i]-u),2));
        }
        printf("\nNow, Summation is %8.4f\n",num);
        printf("\nSo, Mean is %10.4f\n",(sqrt(num/n)));

    }
    else
    {
        printf("Count of inputing number must be between 1 and %d",N);
    }
    return 0;
}

