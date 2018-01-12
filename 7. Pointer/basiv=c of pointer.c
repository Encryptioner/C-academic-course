#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10, *b, c;
    b = &a;
    c = *b;
    printf("%d %d %d\n",a,b,c);

    char *y; char x[3];
    x[0]=1;x[1]=2;x[2]=3;
    y=&x[0];

    printf("%d %d %d\n",*(y+0),*(y+1),*(y+2));

    int var=20; /*actual variable declaration*/
    int *ip; /*pointer variable declaration*/

    ip=&var; /*store address of var in pointer variable */

    printf("Adress of var variable= %x\n",&var);/*if use %x the answer will come in hexadecimal format*/

    /*Address store in pointer variable*/
    printf("Address store in ip variable= %x\n",ip);

    /*Access the value using pointer */
    printf("Value of *ip variable= %d\n",*ip);


    //int *ptr=NULL;
    //printf("The value of ptr is %x\n",ptr);

    //int *ptr=malloc(sizeof(int));
    //printf("\t%d\n",*ptr);

    int *ptr=malloc(sizeof(*ptr));
    printf("\t%d\n",ptr);
}
