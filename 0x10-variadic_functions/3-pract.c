#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints all
 * @format: input to the function
 * Return: returns format if successful
 */
void print_all(const char * const format, ...)
{
	va_list file;
	const char *format_ptr;
	char c;
	int i;
	float f;
	char *s;

	char *separator = ",";
	
	va_start(file, format);
	
	format_ptr= format;
	
	while (*format_ptr != '\0')
	{
		if (*format_ptr == 'c')
		{
			c = (char)va_arg(file, int);
			printf("%s %c", separator,  c);
		}
		else if (*format_ptr == 'i')
		{
			i = va_arg(file, int);
			printf("%s %d", separator, i);
		}
		else if (*format_ptr == 'f')
		{
			f = (float)va_arg(file, double);
			printf("%s %f", separator,  f);
		}
		else if (*format_ptr == 's')
		{
			s = va_arg(file, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
			printf("%s %s",separator,  s);
			}
		}
		format_ptr++;
	}
	va_end(file);
	printf("\n");
}
