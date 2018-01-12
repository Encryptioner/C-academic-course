#include <stdio.h>
int main()
{
    int n;
    FILE *fin,*fo,*fe;
    fin=fopen("Data.txt","r");
    fe=fopen("Even.txt","w");
    fo=fopen("Odd.txt","w");

    while(fscanf(fin,"%d",&n)!=EOF)
    {
        if(n%2==0)
            fprintf(fe,"\t%d",n);
        else
            fprintf(fo,"\t%d",n);
    }
    return 0;
}
