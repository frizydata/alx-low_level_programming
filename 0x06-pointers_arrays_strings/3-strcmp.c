#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 * Return: 0 if s1 and s2 are equal, 
 * negative integer if the stopping character
 * in @s1 was less than the stopping
 * character in @s2
 * positive integer if the stopping character in 
 * @s1 was greater than the stopping character in @s2
 */

int _strcmp(char *s1, char *s2)
{
	int a, output;
	a = 0;

	/* iterating over s1 until the null*/

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * comparing s1 and s2, 
		 * if they differ by a single character,
		 * stop comparing
		 */
		
		if (s1[i] != s2[i])
		{
			/* return the difference between s1 and s2*/
			output = s1[i] - s2[i];
			break;
		}
		else
		{
			/* if they are equal, return 0*/
			output = s1[i] - s2[i];
		}
		i++;
	}
	
		return (output);
}
