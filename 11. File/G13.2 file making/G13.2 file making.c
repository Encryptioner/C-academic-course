#include <stdio.h>
#define NULL 0
main()
{
    FILE *fpt,*fx;
    fpt=fopen("sample.txt","a");
    fx=fopen("sout.txt","w");
    if(fpt==0)
    {
        printf("\n 0 Try Again!! .... Can't open the designated file\n");
        fprintf(fx,"\n 00 Try Again!! .... Can't open the designated file\n");
    }
    else if(fpt>0)
    {
        printf("\n > ERROR!! .... Can't open the designated file\n");
        fprintf(fx,"\n >> ERROR!! .... Can't open the designated file\n");
    }
    else
    {
        fclose(fpt);
        fclose(fx);
    }
    return 0;
}
