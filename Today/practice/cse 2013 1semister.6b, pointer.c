#include <stdio.h>
int main()
{
    int ax[5]={1,2,3,4,5};
    int *pa=ax[2];
    printf("\n%d\n",ax[2]);
    /*printf("\n%d\n",*(pa+1));
    printf("\n%d\n",*(pa-2));
    printf("\n%d\n",*(pa+3));*/
    return 0;
}
