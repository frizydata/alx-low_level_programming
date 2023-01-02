#include "main.h"
/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer to string array input
 * @c: Character to locate from input array
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
