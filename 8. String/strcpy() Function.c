/* Demonstrates strcpy(). */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char source[] = "The source string.";

main()
{
char dest1[80];
char *dest2, *dest3;

printf("\nsource: %s %d", source ,strlen(source));

/* Copy to dest1 is okay because dest1 points to */
/* 80 bytes of allocated space. */
strcpy(dest1, source);

printf("\ndest1: %s %d", dest1,strlen(dest1));

/* To copy to dest2 you must allocate space. */
dest2 = (char *)malloc(strlen(source) -10);//????????

strcpy(dest2, source);

printf("\ndest2: %s %d\n", dest2,strlen(dest2));

return(0);
}
