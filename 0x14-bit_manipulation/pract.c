#include <stdio.h>
#include <string.h>
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, j;
	int len;
	
	len = strlen(b);
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[j]  == '1')
		{
			result = result + (1 << i); 
		}
		else if (b[j] != '0')
		{
			return (0);
		}

	}

		return (result);
}
