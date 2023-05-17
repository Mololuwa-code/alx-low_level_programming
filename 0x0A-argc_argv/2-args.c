#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments received by the program.
 * @argc: The argument count.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

