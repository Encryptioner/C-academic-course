#include <stdio.h>
int main(void)
{
    int account;
    char name[30];
    double balance;

    FILE *cfptr;

    if((cfptr=fopen("clients.text","w"))==NULL)/*fopen function opens a file; r argument means the file is opened for reading*/
    {
        printf("File could not be opened");
    }
    else
    {
        printf("Enter the account no, name & balance: \n");
        printf("Enter EOF(ctrl+z) to end input.\n");
        printf("  ?  \n");
        scanf("%d%s%lf",&account,name,&balance);
        printf("\n%d %s %2.2lf\n",account,name,balance);
    }
    while(!feof(stdin))
    {
        fprintf(cfptr,"%d %s %2.2lf",account,name,balance);
        printf(" ? \n");
        scanf("%d%s%lf",&account,name,&balance);
        printf("\n%d %s %2.2lf\n",account,name,balance);
    }
    fclose(cfptr);
    return 0;
}
