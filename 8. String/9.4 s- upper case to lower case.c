#include <stdio.h>
int main()
{
    char ban1[]="BANGLADESH";
    char ban2[]={'B','a','n','g','l','a','d','e','s','h'};
    char ban3[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    char ban4[]="bangladesh";
    int i,length;
    printf("\n%s\n",ban1);
    printf("\n%s\n",ban2);
    printf("\n%s\n",ban3);
    printf("\n%s\n",ban4);
    length=10;
    //To BANGLADESH to bangladesh
    for(i=0;i<length;i++)
    {
        if(ban1[i]>=65 && ban1[i]<=90)
        {
            ban1[i]='a'+(ban1[i]-'A');
        }
    }
    printf("\nUpper case to lower case :\n\t%s\n",ban1[i]);
    //To BANGLADESH to bangladesh
    for(i=0;i<length;i++)
    {
        if(ban1[i]>=65 && ban1[i]<=90)
        {
            ban1[i]='a'+(ban1[i]-'A');/* or ban1[i]=ban1[i]+32 */
        }
    }
    printf("\nUpper case to lower case :\n\t%s\n",ban1);
    //To Bangladesh to BANGLADESH
    for(i=0;i<length;i++)
    {
        if(ban2[i]>=97 && ban2[i]<=122)
        {
            ban2[i]='A'+(ban2[i]-'a');
        }
    }
    printf("\nLower case to upper case :\n\t%s\n",ban2);
    //To Bangladesh to bangladesh
    for(i=0;i<length;i++)
    {
        if(ban2[i]>=65 && ban2[i]<=90)
        {
            ban2[i]='a'+(ban2[i]-'A');/* or ban1[i]=ban1[i]+32 */
        }
    }
    printf("\nUpper case to lower case :\n\t%s\n",ban2);
    //To Bangladesh to BANGLADESH
    for(i=0;i<length;i++)
    {
        if(ban3[i]>=97 && ban3[i]<=122)
        {
            ban3[i]='A'+(ban3[i]-'a');
        }
    }
    printf("\nLower case to upper case :\n\t%s\n",ban3);
    //To Bangladesh to bangladesh
    for(i=0;i<length;i++)
    {
        if(ban3[i]>=65 && ban3[i]<=90)
        {
            ban3[i]='a'+(ban3[i]-'A');
        }
    }
    printf("\nUpper case to lower case :\n\t%s\n",ban3);
    //To bangladesh to BANGLADESH
    for(i=0;i<length;i++)
    {
        if(ban4[i]>=97 && ban4[i]<=122)
        {
            ban4[i]='A'+(ban4[i]-'a');
        }
    }
    printf("\nLower case to upper case :\n\t%s\n",ban4);
    system("pause");
    return 0;

}
