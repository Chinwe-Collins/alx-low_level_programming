#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that checks endianness
 * Return: returns the endianness
 */
int get_endianness(void)
{
	int num = 1;
	char *endianness_ptr = (char *)&num;

	return ((*endianness_ptr == 1) ? 1 : 0);
}
