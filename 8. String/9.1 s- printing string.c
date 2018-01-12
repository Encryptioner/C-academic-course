#include <stdio.h>
int main()
{
    char ban1[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    char ban2[]={'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','\0','m','y'};
    char ban3[]={'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ','c','o','u','n','t','r','y','\0'};
    char ban4[]={'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ','c','o','u','n','t','r','y'};
    char ban5[]="Bangladesh";
    char *ban6="Bangladesh";
    printf("%s\n",ban1);
    printf("%s\n",ban2);
    printf("%s\n",ban3);
    printf("%s\n",ban4);
    printf("%s\n",ban5);
    printf("%s\n",ban6);

    system("PAUSE");
}
