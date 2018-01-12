#include <stdio.h>
#include <math.h>
#define N 500000

float meancal(float(sqrtnumn))

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

        for(i=1;i<=n;i++)
        {
            sum=sum+array[i];
        }
        u=(sum/n);

        printf("Average is %10.4f\n\n",u);
        for(i=1;i<=n;i++)
        {
            num=num+(pow((array[i]-u),2));
        }

        //printf("\nSo, Mean is %10.4f\n",(sqrt(num/n)));
        return (sqrt(num/n));
    }
    else
    {
        printf("Count of inputing number must be between 1 and %d",N);
        return 0;
    }

}
int main()
{
    float x;

    printf("\nSo, Mean is %f\n",meancal(x));
}

