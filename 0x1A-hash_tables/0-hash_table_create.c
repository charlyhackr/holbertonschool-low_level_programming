#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash  table.
 * @size: THe size of the array.
 * Return: If an error occurs - NULL. or a pointer newhash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	return (ht);
}
