#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Bytes of src
 * Return: Returns pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
