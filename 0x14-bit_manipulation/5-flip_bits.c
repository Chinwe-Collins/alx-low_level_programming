#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: input to the function
 * @m: input to the function
 * Return: return the number of bits if successful
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		xor_result &= (xor_result - 1);
		count++;
	}

	return (count);
}
