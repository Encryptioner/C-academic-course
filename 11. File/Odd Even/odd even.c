#include <stdio.h>
int main()
{
    int n;
    FILE *num,*odd,*even;
    num=fopen("num.txt","r");
    odd=fopen("odd.txt","w");
    even=fopen("even.txt","w");
    fscanf(num,"%d",&n);
    if((n%2)==0)
    {
        fprintf(even,"%d is even\n",n);
        printf("%d is even\n",n);
    }
    else
    {
        fprintf(odd,"%d is odd\n",n);
        printf("%d is even\n",n);
    }
    return 0;
}
