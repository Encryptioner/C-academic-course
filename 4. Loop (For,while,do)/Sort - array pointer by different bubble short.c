#include <stdio.h>
#include <stdlib.h>

void reorder(int n, int *x);

int main()
{
	int i, n, *x;//or x[100 or any int]
	printf("\nHow many numbers will be entered?");
	scanf("%d", &n);
	printf("\n");

	x = (int*)malloc(n * sizeof(int));

	for(i = 0; i < n; ++i)
	{
	    printf("i = %d\t x = ", i+1);
		scanf("%d", x+i);//or scanf("%d", &x[i]);
	}

	reorder(n, x);//passing array to function.. it can't be write as reorder(n, &x);

	printf("\n\nReordered list of Numbers:\n\n");

	for (i = 0; i < n; ++i)
	{
		printf("i = %d\t x = %d\n", i+1, *(x+i));
	}
	system("PAUSE");
	return 0;
}

/*Display the ordered list of numbers*/
/*rearrange the list of numbers*/
void reorder(int n, int *x)
{
	int i, j, temp;
	/*find the smallest of al remaining elements*/
	for(i = 0; i < n - 1; ++i)
	{
		for (j=i+1; j < n; ++j)
		{
			if (*(x+j) < *(x+i))
			{
		/*interchange two elements*/
			temp = *(x+i);
			*(x+i) = *(x+j);
				*(x+j) = temp;
			}
		}
	}
}


