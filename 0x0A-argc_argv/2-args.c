#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: count the number of argument
 * @argv: array of argument
 * Return:Always 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", *argv);
	argv++;
	}

	return (0);
}
