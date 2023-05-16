#include <stdio.h>
#include "main.h"

/**
 * _sqrt - helper function that returns the square root of n
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt(int n, int guess)
{
    /* base case */
    if (guess * guess == n)
        return guess;

    /* if the guess squared is greater than n, there's no natural square root */
    if (guess * guess > n)
        return -1;

    /* try the next guess */
    return _sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    /* start with a guess of 1 */
    return _sqrt(n, 1);
}
