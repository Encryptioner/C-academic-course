#include <stdio.h>

int cubebyreference(int*);

main()
{
	int a,d;
	printf("\na = ");
    scanf("%d", &a);

	d=cubebyreference(&a);
	printf("\n\n %d,%d", a,d);

	return 0;
}

int cubebyreference(int *xPtr)
{
	return(*xPtr = *xPtr * *xPtr * *xPtr);
}

