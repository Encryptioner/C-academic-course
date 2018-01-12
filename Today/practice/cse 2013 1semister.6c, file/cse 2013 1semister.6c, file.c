#include <stdio.h>
int main()
{
    int n,x,i;
    double sum=0,average,a[50];

    FILE *fi,*fo;
    fi=fopen("input.txt","r");
    fo=fopen("out.txt","w");
    printf("How many number u wanna calculate: ");/*if i take more number than input, the extra number will be 0*/
    scanf("%d",&x);
    /*while(fscanf(fi,"%d",&n)!=EOF)
    {
        sum+=n;
    }*/
    for(i=0;i<x;i++)
    {
        fscanf(fi,"%lf",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        sum+=a[i];
    }
    fprintf(fo,"\nsum= %lf\n",sum);
    printf("\nsum= %lf\n",sum);
    average= (sum/x);/*if i use 10, average will be 3.0000*/
    fprintf(fo,"\naverage= %lf\n",average);
    printf("\naverage= %lf\n",average);
    return 0;
}


