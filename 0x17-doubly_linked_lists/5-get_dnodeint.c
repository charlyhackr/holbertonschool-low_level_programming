#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth  node of a linked list
 * @head: pointer to head linked list
 * @index: return node index
 * Return: node index given or null if no doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nAux;
	unsigned int cont;

	nAux = head;
	for (c = 0; nAux && cont < index; nAux = nAux->next, cont++)
		;

	return (nAux);
}
