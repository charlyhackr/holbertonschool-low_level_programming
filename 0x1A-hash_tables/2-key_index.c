#include "hash_tables.h"

/**
 * key_index - get the index
 * @key: the key to get the index
 * @size: the size of the array of the hash table
 * Return: the index of the key
 * Description: use the dbj2 algoritmh.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
