#include <stdio.h>
int main()
{
    //double ara[]={1, 4, 6, 8.07, 9, 11, 14.25, 15, 20, 25, 33, 83, 87.23, 97, 99.99, 100};
    double ara[]={4,5,10,7,8};
    int low_bound=0;
    int high_bound=15;
    int mid_bound;
    double n;
    printf("what number u wanna search? ");
    scanf("%lf",&n);

    while(low_bound<=high_bound)
    {
        mid_bound=(high_bound+low_bound)/2;
        if(n==ara[mid_bound])
        {
            break;
        }
        else if(n<ara[mid_bound])
        {
            high_bound=mid_bound-1;
        }
        else
        {
            low_bound=mid_bound+1;
        }
    }
    if(low_bound>high_bound)
    {
        printf("\nYour searched number isn't in the index.....\n");
    }
    else
    {
        printf("\nYour searched %lf number is in %d location of array. count start from 0\n",n,mid_bound);
        printf("\n Now, low bound is %d and high bound is %d\n",low_bound,high_bound);
    }
    return 0;
}
