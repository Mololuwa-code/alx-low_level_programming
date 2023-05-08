#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: The string to search.
 * @c: The chaaracter to locate.
 *
 * Return: A pointer to the first occurence of the character c in the string
 * s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
