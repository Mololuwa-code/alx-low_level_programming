#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	char leet_dict[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_dict[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}
	return (str);
}
