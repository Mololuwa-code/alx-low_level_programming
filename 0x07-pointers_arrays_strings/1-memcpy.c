#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area @dest.
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
