#include <stdio.h>
int main()
{
    int n,i,j,t,count=0,a[20];
    FILE *fin,*fo,*fe;
    fin=fopen("Data.txt","r");
    fo=fopen("ascend.txt","w");
    fe=fopen("descend.txt","w");

    while(fscanf(fin,"%d",&n)!=EOF)
    {
        a[count++]=n;
        //count++;
    }
    /*for(i=0;i<count-1;i++){
            for(j=i+1;j<count;j++){
    /*for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++){ */ /*

                if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }}}  */

    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }

    for(i=0;i<count;i++)
    {
        fprintf(fo,"%d\n",a[i]);
    }
    return 0;
}
