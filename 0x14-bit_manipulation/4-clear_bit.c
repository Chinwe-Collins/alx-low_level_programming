#include <stdio.h>
#include "main.h"
/**
 * clear_bit - function that clears the bit
 * @n: input to the function
 * @index: input to the function
 * Return: returns 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;


	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
