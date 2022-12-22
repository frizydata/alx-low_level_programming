#include "main.h"
/**
 * cap_string - This function capitalizes all words of a string
 * @s: input string
 * Return: Pointer to dest
 */

char *cap_string(char *s)
{
	int c = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + c) >= 97 && *(s + c) <= 122)
	{
		*(s + c) = *(s + c) - 32;
	}
	c++;
	while (*(s + c) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if ((*(s + (c + 1)) >= 97) && (*(s + (c + 1)) <= 122))
			{
				*(s + (c + 1)) = *(s + (c + 1)) - 32;
			}
			break;
		}
	}
	return (s);
}
