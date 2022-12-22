#include "main.h"
/**
 * string_toupper - This function changes all lowercase of string to uppercase
 * @s: Pointer to char input
 * Return: s
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
		{
			*(s + i) = *(s + i) - 32;
		}

		i++;
	}

	return (s);
}
