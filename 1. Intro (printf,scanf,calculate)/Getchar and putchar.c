#include<stdio.h>

int main( ) {
char c;
c = getchar( );
putchar(c);
printf("\n");
while( (c=getchar( )) != '\0' )
putchar(c);
printf("\n");
while( putchar(getchar( )) != '\0' ) ;

}
