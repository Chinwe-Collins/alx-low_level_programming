#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: input to the function
 * @n: input to the function
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mynumber;
	unsigned int i;


	va_start(mynumber, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mynumber, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

