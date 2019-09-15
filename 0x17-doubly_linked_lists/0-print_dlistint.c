#include "lists.h"

/**
 * print_dlistint - Print all the values of each nodes in a list
 * @h: head pointer in a doubly linked list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nAux;
	size_t conta;

	nAux = h;
	while (nAux && nAux->prev)
		nAux = nAux->prev;

	for (count = 0; nAux; conta++, nAux = nAux->next)
		printf("%d\n", nAux->n);

	return (conta);
