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
	char letter;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
