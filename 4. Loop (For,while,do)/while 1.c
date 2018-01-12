#include <stdio.h>
int main()
{
    static int a;
    printf("Enter Number= ");
    scanf("%d",&a);
    while(a<20&a>-20){
        printf("\nValue of a= %d\n",a);
        a++;}
    printf("\n*Exact value of a= %d\n",a);
}
