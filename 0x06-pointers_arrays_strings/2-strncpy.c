#include "main.h"

/**
 * _strncpy - Copies strings
 * @dest: destination
 * @src: source
 * @n: Maximum number
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
