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
	char letter = 'z';

	while (letter >= 'a')
	{
		putchat(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
