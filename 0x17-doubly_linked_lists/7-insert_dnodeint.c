#include "lists.h"
/**
 * insert_dnodeint_at_idx - insert new node in a given position
 * @h: double pointer to head
 * @idx: index to insert
 * @n: value to store in new node
 * Return: Address of new node or null if failed
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int conta;
	dlistint_ *nAux, *prev, *nuevo;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;
	for (aAux = *h, conta = 1; nAux && conta < idx; conta++, nAux = nAux->next)
		prev = nAux;
	if (idx == 0)
	{
		*h = nuevo;
		nuevo->prev = NULL;
		nuevo->next = (nAux == NULL) ? NULL : nAux;
		return (new); }
	if (idx == 1)
	{
		prev = *h;
		nAux = ((*h)->next == NULL) ? NULL : (*h)->next;
		nuevo->prev = prev;
		nuevo->next = nAux;
		prev->next = nuevo;
		if (nAux)
			nAux->prev = nuevo;
		return (nuevo); }
	if (idx == conta && nAux == NULL)
	{
		if (prev != NULL)
		{
			nuevo->prev = prev;
			nuevo->next = NULL;
			prev->next = nuevo;
			return (nuevo); }
		free(nuevo);
		return (NULL); }
	else if (idx != conta && nAux == NULL)
	{
		free(nuevo);
		return (NULL); }
	prev = nAux;
	nAux = nAux->next;
	nuevo->prev = prev;
	nuevo->next = nAux;
	prev->next = nuevo;
	nAux->prev = nuevo;
	return (nuevo); }
