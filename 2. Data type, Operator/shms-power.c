#include <stdio.h>
#include<math.h>
int main()
{
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=pow(x,2);/*using 5,10,11 comes answer=real answer-1.. may the problem happen4 int.. float or x*x is appropriate.*/
printf("\n%d",y);
return 0;
}
