#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: Amount of bytes
 * Return: Pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	*str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	/*set n to length of s2*/
	if (n >= s2)
		n = l2;

	str = (char *) malloc ((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);


	/*add s1 to str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*add s2 n bytes to str*/
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
