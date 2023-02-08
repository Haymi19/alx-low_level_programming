#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table or
 * If something went wrong NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table;

	hash_node_t **array;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;

	table->size = size;

	return (table);
}
