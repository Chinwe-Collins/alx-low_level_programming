#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the elements of the list
 * @h: function input
 * Return: return the number of node
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", i, h->str);
		}
		i++;
		h = h->next;
	}

	return (i);
}
