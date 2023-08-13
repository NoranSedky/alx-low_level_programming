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
	int j;
	int num1;
	int num2;

	for (i = 0; i <= 99; i++)
	{
		num1 = i / 10;
		num2 = i % 10;
		for (j = i; j <= 99; j++)
		{
			num3 = j / 10;
			num4 = j % 10;
			if (i == j)
			{
				continue;
			}
			if (num1 < num3 || (num1 == num3 && num2 <= num4))
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar(' ');
				putchar('0' + num3);
				putchar('0' + num4);
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
