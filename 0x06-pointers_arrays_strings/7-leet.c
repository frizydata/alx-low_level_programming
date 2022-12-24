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

	while (s[a] != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (s[a] == small_letters[b] || s[a] == capital_letters[b])
				s[a] = leet_style[b];
		}
		a++;
	}

	return (s);
}
