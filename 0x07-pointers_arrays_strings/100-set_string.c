#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: double pointer to a string.
 * @to: pointer to a string.
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
