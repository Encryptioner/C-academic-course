#include <stdio.h>
int main()
{
    int mark;
    printf("Enter number= ");
    scanf("%d",&mark);

    if(mark>=60)
        printf("\n 1st Division");
    else if(mark>=45)
        printf("\n 2nd Division");
    else if(mark>=33)
        printf("\n 3rd Division");
    else
        printf("Fail");
 return 0;
}
