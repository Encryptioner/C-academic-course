#include <stdio.h>
int main()
{
    int i,j=25;
    int *pi,*pj=&j;
    *pj=j+5;
    i=*pj+5;
    pi=pj;
    *pi=i+j;
    printf("%d\n",&i);
    printf("%d\n",pj);
    printf("%d\n",*pj);
    printf("%d\n",pi+2);
    printf("%d\n",(*pi+2));
    printf("%d\n",*(pi+2));


}


