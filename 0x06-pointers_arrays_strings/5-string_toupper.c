#include "main.h"
/**
 * string_toupper - This function changes all lowercase of a string to uppercase
 * @s: Pointer to char input
 * Return: s
 */

char *string_toupper(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		if (s[a] > 96 && s[a] < 123)
		{
			[i] = s[i] - 32;
		}
		
		i++;
	}

	return (s);
}
