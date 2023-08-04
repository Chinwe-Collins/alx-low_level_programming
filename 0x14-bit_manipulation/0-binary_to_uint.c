#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - function that converts string to integer
 * @b: input to the function
 * Return: returns unsigned int if successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = strlen(b);
	int base = 1;
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += base;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		base <<= 1;												           }
	return (result);
}
