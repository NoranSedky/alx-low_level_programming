#include "main.h"

/**
 * puts2 - pointers
 *
 * @str: srting parameter
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}

	putchar('\n');
}
