#include "main.h"

/**
 * leet - Encodes a string into "1337"
 * @str: Pointer
 * Return: Pointer
 */

char *leet(char *str)
{
	char *ptr = str;
	char replacements[] = "AEOTL";
	char leet_values[] = "43071";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; replacements[j] != '\0'; j++)
		{
			if (str[i] == replacements[j] || str[i] == replacements[j] + 32)
			{
				str[i] = leet_values[j];
				break;
			}
		}
	}
	return (str);
}
