#include <stdio.h>
#include "main.h"
/**
 * get_bit - function that gets the bits of a value
 * @n: function input
 * @index: function input
 * Return: return bit value if successful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	int bit_value;


	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	bit_value = (n & mask) ? 1 : 0;


	return (bit_value);
}
