#include <stdio.h>
main()
{
    int k,i;
    FILE *fp,*f1,*f2;
    fp=fopen("output.txt","w");
    for(k=65;k<=90;k++)
    {
        fprintf(fp,"%d\n",k);
    }
    fclose(fp);
    /*f1=fopen("in.txt","r");
    f2=fopen("out.txt","w");
    for(i=0;i<5;i++)
    {

        printf("%d\n",i);
        fprintf(f2,"%d\n",i);
    }
    fclose(f1);
    fclose(f2);*/
}
