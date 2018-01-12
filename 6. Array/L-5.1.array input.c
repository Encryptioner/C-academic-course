#include <stdio.h>//there have problem boy../This program change value in a specific position. But the contents of array enlarge one..

int main()
{
    int i,n,p;
    double a[100];
    printf("How many numbers u wanna input? ");
    scanf("%d",&n);
    printf("Now, Enter  number:\n");
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    printf("Enter any position to insert= ");
    scanf("%d",&p-1);
    if(p<0 || p>n)
        printf("insert is impossible");
    else
    {
        for(i=n-1;i>=p;i--)
            a[i+1]=a[i];
        printf("Enter any number to insert= ");
        scanf("%lf",&a[p]);
        n++;
    }
    printf("\nAfter insert array contains\n");
    for(i=0;i<n;i++)
        printf("%12.4lf\n",a[i]);
    return 0;
}
