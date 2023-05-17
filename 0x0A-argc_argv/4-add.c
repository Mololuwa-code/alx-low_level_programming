#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *number = argv[i];

		int j;

		for (j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(number);
	}
	printf("%d\n", sum);

	return (0);
}
