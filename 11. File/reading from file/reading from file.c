#include <stdio.h>

int main()
{
    int i,n,a[50];
    FILE *fp,*fo;
    fp=fopen("in.txt","r");
    fo=fopen("out.txt","w");

    printf("  Data Input\n\n");
    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        fprintf(fo,"%d\n",a[i]);
    }

    return 0;
}
