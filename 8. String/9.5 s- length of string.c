#include <stdio.h>/*1.prothom 2 bar ja input deowa hoy up and down key er maddhome 3rd bar ta suggestion hishebe paowajai..
2."\0" dile ekbar "enter command number show korecilo bt pore hosce na.. 3.program pause or end korar option dekhasse na..
5.character input er majhe space or tab=n dile ekbarei (n+1) loop chole. 6.Enter character kothai show korbo bujhsi na. */
int string_length(char str[])
{
    int i,length=0;
    //for(i=0;str[i]!='\0';i++)/*for loop er pore bracket na dile length=0 show korbe..*/
    //{
        //length++
    //}
    //return i;/*or length*/
    i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
    printf("\nEnter charac :\n");/* function return korar por baki part orthohin*/
}
int main()
{
    char country[100];
    int length;
    printf("\nEnter character :\n");
    while(1==scanf("%s",country)&&printf("\nEnter character :\n"))/*&character likhle result eki hoy*/
    {

        length=string_length(country);
        printf("\nlength= %d\n",length);
        printf("\nEnter character :\n");

    }
    return 0;
}
