#include <stdio.h>
#include "main.h"
/**
 * _putchar - Writes the character to the stdout
 *
 * @c: character to be printed
 *
 * Return: Always return 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
