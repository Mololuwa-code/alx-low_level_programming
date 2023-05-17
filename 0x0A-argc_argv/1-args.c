#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The argument count.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
