#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list _ print all the element of the list_t list
 * @h: the list_t list.
 *
 * Return: The list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

