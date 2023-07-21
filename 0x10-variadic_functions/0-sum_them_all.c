#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that sums all the input integers
 * @n: input to the function
 * Return: returns add if successful
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int result;

	if (n == 0)
		return (0);

	va_start(add, n);

	result = 0;

	for (i = 0; i < n; i++)
	{
		result +=  va_arg(add, int);
	}

	va_end(add);
	return (result);
}
