#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of linked list
 * Return: counter
 */

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}

	return (cont);
}
