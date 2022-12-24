#include "main.h"
/**
 * leet - Encodes string to the 1337 leet encode style
 * @s: String to be encoded
 * Return: The encoded string s
 */

char *leet(char *s)
{

	int a, b = 0;
	int small_letters[] = {97, 101, 111, 116, 108};
	int capital_letters[] = {65, 69, 79, 84, 76};
	int leet_style[] = {52, 51, 48, 55, 49};

	while (s[b] != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (s[b] == small_letters[a] || s[b] == capital_letters[a])
				s[b] = leet_style[a];
		}
		b++;
	}

	return (s);
}
