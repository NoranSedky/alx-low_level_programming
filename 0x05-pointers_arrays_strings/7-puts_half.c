#include "main.h"

/**
 * puts_half - pointers
 *
 * @str: srting parameter
*/

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (int i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
