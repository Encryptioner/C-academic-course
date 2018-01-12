#include <stdio.h>/*Why ????*/
int main()
{
    int x;
    for(x=1;x<=10;x++)
    {
        if(x<5)
            continue;
        else
            break;
        printf("Bangladesh\n");
    }
    return 0;
}
