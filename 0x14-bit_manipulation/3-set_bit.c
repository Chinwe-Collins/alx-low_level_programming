#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the bit of numbers
 *@n: function input
 *@index: function input
 * Return: returns 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	 mask = 1UL << index;
	*n |= mask;

	return (1);
}
