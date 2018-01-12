#include <stdio.h>//Have problem
int main()
{
    int a[50],b[50],c[50];
    int n1,n2,i,j,min=0,t=0;
    freopen("Sort - Merge sort of two sorted array.txt","r",stdin);
    printf("How many number in 1st array : ");
    scanf("%d",&n1);
    printf("\nEnter number : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n1;i++)
    {
        min=a[i];
        t=i;
        for(j=i+1;j<n1;j++)
        {
            if(a[j]<min)//for descending order if(a[j]>min)
            {
                min=a[j];
                t=j;
            }
        }
        a[t]=a[i];
        a[i]=min;
    }
    printf("\nSorted in ascending order in 1st array...\n\n");
    for(i=0;i<n1;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n\nHow many number in 2nd array : ");
    scanf("%d",&n2);
    printf("\nEnter number : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n2;i++){
        for(j=i+1;j<n2;j++)
    {
        if(b[j]<b[i])//if(b[j]<b[i])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }}
    printf("\nSorted in ascending order in 2nd array...\n\n");
    for(i=0;i<n2;i++)
    {
        printf("%d\n",b[i]);
    }

    t=0;
    int x=0,y=0;

    for(i=0;i<(n1+n2);i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[y]<a[x] && x<n1 && y<n2)//if(b[y]<a[x] && x<n1 && y<n2)
            {
                c[t]=b[y];
                ////x=i;////x=0;//x=z;//z++;
                y++;
                if(y==n2)
                {
                    b[y]=a[n1-1];
                }

                printf(" %d in if\n",i);
                printf("c[%d] = %d\n\n",t,c[t]);
                break;
            }
            else
            {
                c[t]=a[x];
                if(x>=n1)
                {
                    c[t]=b[y++];
                }
                else if(y>=n2)
                {
                    c[t]=a[x++];
                }
                x++;//
                printf(" %d in else\n",i);
                printf("c[%d] = %d\n\n",t,c[t]);
                break;
            }
            printf("\n\nasdfg/n/n");
        }
        t++;
    }

    printf("\nSorted in ascending order (1st + 2nd) array...\n\n");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d\n",c[i]);
    }

    return 0;
}
