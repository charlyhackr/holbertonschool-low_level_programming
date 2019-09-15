#include "lists.h"

/**
 * dlistint_len - Print the  number of nodes in a list
 * @h: head pointer in a linked list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nAux;
	size_t conta;

	nAux = h;
	while (nAux && nAux->prev)
		nAux = nAux->prev;

	for (conta = 0; nAux; conta++, nAux = nAux->next)
		;

	return (conta);
}
