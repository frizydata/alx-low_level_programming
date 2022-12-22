#include "main.h"
/**
 * string_toupper - This function changes all lowercase of string to uppercase
 * @s: Pointer to char input
 * Return: s
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] > 96 && s[a] < 123)
		{
			s[i] = s[i] - 32;
		}

		i++;
	}

	return (s);
}
