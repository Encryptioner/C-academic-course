#include <stdio.h>//problem...smaller value?out of range show?more efficient?give up array value if out of range? ?=how
int main()
{
    float a[50000],s=-50000;/*s=50000*/
    int i,n;
    printf("How many numbers do u wanna add: ");
    scanf("%d",&n);
    printf("Enter values of array= \n");
    for(i=0;i<n;i++)
    {
        scanf("%g",&a[i]);
        if(a[i]<s)/*>*/
        {
            printf("This value %g is out of range\n",a[i]);
        }
    }
        for(i=0;i<n;i++)
        {
            if(a[i]>s)/*<*/
            {
                s=a[i];
            }
        }
    printf("Biggest value in array= %g\n",s);/*smallest*/
    return 0;
}
