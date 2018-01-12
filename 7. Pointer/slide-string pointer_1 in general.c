#include <stdio.h>
#include <stdlib.h>

char x[] = "Externally";

int main()
{
	static char y[ ] = "Internally";

	printf("\n%s", x);
	printf("\n%s\n", y);

	system("PAUSE");

	return 0;
}


