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

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->size = 0;

	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
