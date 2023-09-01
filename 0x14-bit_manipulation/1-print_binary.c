#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints binary
 * @n: input to the function
 * Retun: returns nothing if successful
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i;
	int leading_zero = 1;

	for (i = num_bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			leading_zero = 0;
			putchar('1');
		}
		else if (!leading_zero || i == 0)
		{
			putchar('0');
		}
	}
}
