#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data of a list
 * @head: head of list
 * Return: sum of all or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int suma;
	dlistint_t *nAux;

	nAux = head;
	for (suma = 0; nAux; nAux = nAux->next)
		suma += nAux->n;

	return (suma);
}
