#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: counting the number
 * @argv: array of argument
 * Return: Always 0 if successful
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
