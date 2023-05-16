#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: If successful, a pointer to a new string is returned.
 * It returns NULL if insufficient memory was available or if `str` is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
