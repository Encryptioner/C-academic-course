#include <stdio.h>
void main()
{
    int r,n,a=1,t;
    printf("Enter number: ");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        a=a*10;/*for 563 it iz 1000 here */
    }
    printf("\n%d :::::\n\n",n);
    while(a>1)
    {
        a=a/10;
        r=n/a;

        //printf("%d\n",r);
    switch(r)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    case 0:
        printf("Zero ");
        break;
    }
    n=n%a;
    }
    printf("\n\n");
}
