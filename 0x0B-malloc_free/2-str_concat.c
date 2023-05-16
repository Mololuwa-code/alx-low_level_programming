#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to newly allocated space in memory containing
 * the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);
}
