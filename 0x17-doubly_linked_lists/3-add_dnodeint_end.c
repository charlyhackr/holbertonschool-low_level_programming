#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: double pointer to head
 * @n: value to store in new node
 * Return: Address of new element, or null if failled
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nAux, *nuevo;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->next = NULL;
	nAux = *head;
	while (nAux && nAux->next)
		nAux = nAux->next;

	if (nAux)
	{
		nuevo->prev = nAux;
		nAux->next = nuevo;
	}
	else
	{
		*head = nuevo;
		nuevo->prev = NULL;
	}

	return (nuevo);
}
