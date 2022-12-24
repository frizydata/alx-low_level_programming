#include "main.h"
/**
 * rot13 - Encodes a string using the rot13 style
 * @s : Pointer to the string to encode
 * Return: Pointer to string s
 */

char *rot13(char *s)
{
	int a, b = 0;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[a] != '\0')
	{
		for (b = 0; b <= 51; b++)
		{
			if (s[a] == alphabet[b])
			{
				s[a] = rot_alphabet[b];
				break;
			}
		}
		a++;
	}

	return (s);
}
