#include <stdio.h>
int main()
{
    float total, expenses[10]={5.3,6.9,7.8,8.1,2,12.2};/*expenses[] or expenses[n], where n<13 hole problem hobe.. but n>=13 hole ok..*/
    int count,month;
    for(month=0,total=0;month<13;month++)
    {
        total+=expenses[month];
    }
    for(count=0;count<13;count++)
        printf("Month %d = %.2f K$\n",count+1,expenses[count]);
    printf("Total = %.3f K$, Average = % .2f K$\n",total,total/13);
    return 0;
}
