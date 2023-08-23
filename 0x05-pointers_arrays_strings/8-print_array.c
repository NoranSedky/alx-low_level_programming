#include "main.h"

/**
 * print_array - pointers
 * @a: Pointer to the array
 * @n: int parameter
*/

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
