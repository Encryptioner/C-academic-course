#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a&b&c ");
    scanf("\n%d \n%d \n%d", &a,&b,&c);
    if(b>c){
        if(b>a){
          printf("\nb is largest");}
        else{
          printf("\na is largest");}}
    else{
        if(c>a){
          printf("\nc is largest");}
        else{
          printf("\na is largest");}}
return 0;
}
