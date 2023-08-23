#include "main.h"

/**
 * rev_string - pointers
 *
 * @s: srting parameter
*/

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = length - 1;
	char temp = s[start];

	while (s[length] != '\0')
	{
		length++;
	}
	while (start < end)
	{
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
