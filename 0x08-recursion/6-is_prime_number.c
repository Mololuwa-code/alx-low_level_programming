#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: input integer
 * Return: 1 if n is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (n == 3)
		return (1);
	if (n % 3 == 0)
		return (0);
	if (n == 5)
		return (1);
	if (n % 5 == 0)
		return (0);
	if (n == 7)
		return (1);
	if (n % 7 == 0)
		return (0);
	return (1);
}
