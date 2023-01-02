#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: Input string to search for matching substring
 * @needle: Substring to seaech for
 * Return: Poimter to the beginning of the located substring
 *	or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack++;
	}

	return ('\0');
}
