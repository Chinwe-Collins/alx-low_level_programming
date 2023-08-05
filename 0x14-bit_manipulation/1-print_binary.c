#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints binary
 * @n: input to the function
 * Retun: returns nothing if successful
 */
void print_binary(unsigned long int n)
{
	int numBits = sizeof(unsigned long int) * 8;
	int i;
	int leadingZero = 1;

	for (i = numBits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			leadingZero = 0;
			putchar('1');
		}
		else if (!leadingZero || i == 0)
		{
			putchar('0');
		}
	}
}
