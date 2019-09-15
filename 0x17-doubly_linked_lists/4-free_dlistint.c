#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nAux, *alm;

	if (head == NULL)
		return;

	nAux = head;
	while (nAux->prev)
		nAux = nAux->prev;
	while (nAux)
	{
		alm = nAux;
		nAux = nAux->next;
		free(hold);
	}
}
