#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginnig of a list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nAux, *nuevo;

	nAux = *head;
	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->prev = NULL;
	if (nAux == NULL)
		nuevo->next = NULL;
	else
	{
		while (nAux->prev)
			nAux = nAux->prev;

		nAux->prev = nuevo;
		nuevo->next = nAux;
	}
	*head = nuevo;

	return (*head);
}
