#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print the elements
 * @h: linked list head
 * Return: number element in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
