#include <stdio.h>
int main()
{
    int a;
    printf("Enter value less than 100= ");
    scanf("%d",&a);
    if(a<=100&a>=0)
       {
           while(a<=100)
        {
            printf("%d\n",a);
            a=a-2;
            if(a<50)
            {
                break;
            }
        }
       }
       else
       {
           printf("No comment");
       }
       return 0;
}
