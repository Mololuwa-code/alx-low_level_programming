#include "main.h"

/**
 * positive_or_negative - checks for positive or negative numbers
 * @i: check the number.
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negaive", i);
	else
		printf("%d is positive", i);
}
