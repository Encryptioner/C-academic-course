#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,i;
    printf("Enter number: ");
    scanf("%d", &a);
    for(i=0;i<a;i++)
    printf("\n%d", 1+rand()%10);
    return 0;
}

