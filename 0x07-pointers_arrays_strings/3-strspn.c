#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: Pointer to string input
 * @accept: Substring prefix to look for
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
		{
			break;
		}
		i++;
	}

	return (i);
}
