#include "main.h"
#include <stddef.h>

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result buffer, or NULL if the result is too large
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, carry = 0, sum = 0;

	while (*(n1 + i + 1))
		i++;
	while (*(n2 + j + 1))
		j++;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += *(n1 + i--) - '0';
		if (j >= 0)
			sum += *(n2 + j--) - '0';
		if (k >= size_r - 1)
			return (NULL);
		*(r + k++) = (sum % 10) + '0';
		carry = sum / 10;
	}
	*(r + k) = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char tmp = *(r + i);
		*(r + i) = *(r + j);
		*(r + j) = tmp;
	}
	return (r);
}
