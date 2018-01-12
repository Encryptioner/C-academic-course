#include <stdio.h>/*why output?*/
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        if(i)/*if(i%2==0) why output empty*/
            break;
        else
            printf("%d\n",i);
    }
    return 0;
    system("Pause");
}
