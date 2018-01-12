#include <stdio.h>
//#include <stdlib.h>
int main()
{
    int x;
    int *ptr;
    x=10;
    ptr=&x;

    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("&ptr = %d\n",&ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&*ptr = %d\n",&*ptr);

    /**ptr=*ptr+1;

    printf("Before ptr increment_1 when *ptr=*ptr+1 :\n\n");
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("&ptr = %d\n",&ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&*ptr = %d\n",&*ptr);*/

    ptr=ptr+1;

    printf("\nAfter ptr increment_1 when ptr=ptr+1 :\n\n");
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("&ptr = %d\n",&ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&*ptr = %d\n",&*ptr);

    *ptr=*ptr+1;

    printf("Before ptr increment_2 when *ptr=*ptr+1 :\n\n");
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("&ptr = %d\n",&ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&*ptr = %d\n",&*ptr);


    system("PAUSE");
    return 0;
}
