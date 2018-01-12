#include <stdio.h>//what??
int main()
{
    int i,n,p;
    int a[500000];
    printf("How many number u wanna input= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)

        scanf("%f",&a[i]);

    printf("Enter any position to start= ");
    scanf("%d",&p);
    if(p<0||p>n)

        printf("Insert is impossible");

    else
    {
        for(i=n-1;i>=p;i--)

            a[i+1]=a[i];
        printf("Enter any number to insert= ");
        scanf("%d",&a[p]);
        n++;
    }
    printf("After insert any contains:\n");
    for(i=0;i<n;i++);
    {
        printf("%4.4f",a[i]);
    }

    return 0;
}
