#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string to convert
 *
 * Return: integer representation of the string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
