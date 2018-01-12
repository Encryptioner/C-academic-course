#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *token, input[100]="0 1 2",p[2]=" ";
    string c;
    int x;
    token=strtok(input,p);
    printf("%s\n",token);
    while(token!=NULL)
    {
        token=strtok(NULL,p);
        //c=token;
        if(token!=NULL){
        x=strlen(token);
        cout<<x;}
        printf("%s\n",token);
    }
    printf("ghehy\n");
}
