#include <stdio.h>
main()
{
    int i;
    for(i=0;i<2;i++)
    {
        switch(i)
        {
            case 1: printf("%d\n",i);
            case 2: printf("%d\n",i);
            default: printf("%d\n",i);
        }
    }
}

