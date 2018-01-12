#include <stdio.h>
int main()
{
    int a;
    a=2;
    /*printf("%d\n%d\n%d\n",a,a++,a);/*dan dik theke man gunte hoy. sob theke daner "a" er man prothom khetre poriborton hoy na. tarpor "a++" a giye a er man 1 barleo "a++" er man 2 thakbe. sorbosesh a er man 3 hoy..
    ebar data print er shomoy dan dik theke print hoy. jekhane sudhu "a" thake sekhane "a" er final man 3 print hoy. kintu "a++" e operator ache bole process er shomoy je man paowa jai tai print hoy..
    so, output: 3 2 3 */
    printf("\n%d\n%d\n%d\n%d\n",a,a++,a,++a);/*4 3 4 4*/
    //printf("\n%d\n%d\n%d\n%d\n",++a,a++,a,a++);/*5 3 5 2*/
    //printf("\n%d\n%d\n%d\n%d\n",a,a++,++a,a);/*4 3 4 4*/
    getch();
}
