#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter Number= ");
    scanf("%d",&a);
    for(i=a+1;i<20&i>-20;i++){/*if I use a=i program always show a=2.. Why??? If I use i=a++ progrm show a=a+1*/
        printf("\nValue of a intermediate 20= %d\n",i*1);}

    printf("\n*Exact value of a= %d\n",a*1);
}
