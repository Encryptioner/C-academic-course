#include <stdio.h>
int main()
{
    int a;
    printf("Enter number= ");
    scanf("%d",&a);
    if(a%2==0)/* this statement means if dividation of a by 2 makes vagsesh 0, even will print. ==  means is equal to but != means is not equal to. we can use / instead of%*/
    {
      printf("even");
    }
    else
    {
      printf("odd");
    }
return 0;
}
