#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer 1
 * @s2: Pointer 2
 * Return: less, equal, greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(*s1) - (int)(*s2));
}
