#include "main.h"

/**
 * _strcat - pointers
 *
 * @src: source parameter
 * @dest: destnation
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int c;
	int c2;

	c = 0;
	while (dest[c])
	{
		c++;
	}
	for (c2 = 0; src[c2]; c2++)
	{
		dest[c++] = src[c2];
	}
	return (dest);
}
