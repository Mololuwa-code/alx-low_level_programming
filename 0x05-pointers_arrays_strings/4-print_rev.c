#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to a string.
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
