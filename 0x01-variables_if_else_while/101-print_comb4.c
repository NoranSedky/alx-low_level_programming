#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A C code
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = x + 2; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
