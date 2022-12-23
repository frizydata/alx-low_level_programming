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
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}

		a++;
	}

	return (s);
}
