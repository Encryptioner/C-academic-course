#include <stdio.h>
#include <stdlib.h>

int main()
{
	static int x[10] = {10,11,12,13,14,15,16,17,18,19};

	int i;
    for (i = 0; i <= 9; ++i)
	{
		printf("\n i = %d\tx[i] = %d\t*(x+i) = %d", i, x[i], *(x+i));

		printf("\t &x[i] = %X\t x+i = %X\n", &x[i], (x+i));
	}
	system("PAUSE");

	return 0;
}

