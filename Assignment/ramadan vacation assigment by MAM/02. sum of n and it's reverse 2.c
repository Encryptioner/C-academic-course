#include <stdio.h>
int main()
{
    int num,renum,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    renum=num;
    for(;renum;)
    {
        sum*=10;
        sum= sum + renum %10 ;
        renum/=10;
    }
    renum=sum;
    printf("\nIt's reverse number= %d\n",renum);
    printf("\n %d + %d = %d\n",renum,num,sum+num);
    return 0;
}
