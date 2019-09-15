#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of a list
 * @head: double pinter to head
 * @index: index position to remove  the linked list
 * Return: 1 if succeeded -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nAux, *next, *prev;
	unsigned int conta;

	if (*head == NULL)
		return (-1);

	for (nAux = *head, conta = 0, prev = NULL; nAux && conta < index; conta++)
	{
		prev = nAux;
		nAux = nAux->next;
	}

	if (nAux == NULL)
		return (-1);

	next = nAux->next;
	if (prev == NULL)
	{
		free(nAux);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(nAux);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(nAux);
	}

	return (1);
}
