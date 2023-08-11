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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
