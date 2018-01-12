#include <stdio.h>
int main()
{
    struct library
    {
        int id;
        char name[50];
        char author[50];
        float price;
    }book [50],t;

    int i,j,n;
    freopen("chart.txt","r",stdin);

    printf("How many input u want? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        printf("\n");
        printf("ID no %d = ",i+1);
        scanf("%d",&book[i].id);
        printf("Book name %d = ",i+1);
        scanf("%s",book[i].name);/*Its make problem if there is an space*/
        printf("Author name %d = ",i+1);
        scanf("%s",book[i].author);
        printf("Price of %d no = ",i+1);
        scanf("%f",&book[i].price);

    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
    {
        if(book[j].price<book[i].price)
        {
            t=book[i];
            book[i]=book[j];
            book[j]=t;
        }
    }

    printf("\n........................................................................\n");
    printf("| no |   ID no   |     Book Name      |    Writer Name     |  Price  |\n");
    printf("........................................................................\n");

    for(i=0;i<n;i++)
    {
        printf("| %2.0d |  %6.0d  |  %16s  |  %16s  |  %3.2f  |\n",i+1,book[i].id,book[i].name,book[i].author,book[i].price);
        printf("........................................................................\n");
    }
    return 0;
}
