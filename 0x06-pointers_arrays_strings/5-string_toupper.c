#include "main.h"

/**
 * string_toupper - Converts lowercase letters in a string to uppercase.
 * @str: Pointer
 * Return: Pointer
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
