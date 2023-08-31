#include "main.h"
#include <stdbool.h>

/**
 * wildcmp_helper - Helper function to compare two strings with wildcard.
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 * Return: true if strings can be considered identical, false otherwise.
 */
bool wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (true);
	}
	else if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;

		if (*(s2 + 1) == '\0')
			return (true);

		while (*s1 != '\0')
		{
			if (wildcmp_helper(s1, s2 + 1))
				return (true);
			s1++;
		}
		return (false);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	return (false);
}

/**
 * wildcmp - Compares two strings with support for the * wildcard.
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
