#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 * Return: nothing if ht is NULL.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int a;
	int pal;

	if (ht == NULL)
		return;

	printf("{");

	for (a = 0, pal = 0; a < ht->size; a++)
	{
		temp = ht->array[a];
		if (temp != NULL)
		{
			if (pal == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}

			pal = 1;
		}
	}

	printf("}\n");
}
