#include "main.h"

/**
 * _strcpy - Copies the string pointed
 * @dest: Pointer to destination
 * @src: Pointer to source
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
