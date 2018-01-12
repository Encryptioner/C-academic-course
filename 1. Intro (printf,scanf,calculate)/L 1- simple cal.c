#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter your 1st & 2nd integer= ");
    scanf("%f %f",&a,&b);
    printf("Sum is %f\n",a+b);//for summation
    printf("\nSubtract is %f\n",a-b);//for subtraction
    printf("\nMultiple is %g\n",a*b);//for multiplication
    printf("\nDivide is %g\n",a/b);//for dividation
    system ("PaUse");/*or Pause/pause/PAUSE... no other command isn't applicable. like stop/the end.. using the end shows only the..*/
    return 0;/*after system ("PaUse");, return 0; doesn't make any varify in the program. it is same using it or not..*/
}
