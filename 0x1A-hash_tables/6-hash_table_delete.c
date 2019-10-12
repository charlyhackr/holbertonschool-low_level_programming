#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: always
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *anter;
	unsigned long int siz, a;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (a = 0, siz = ht->size; a < siz; a++)
	{
		temp = ht->array[a];
		while (temp)
		{
			anter = temp;
			temp = temp->next;
			free(anter->key);
			free(anter->value);
			free(anter);
		}
	}

	free(ht->array);
	free(ht);
}
