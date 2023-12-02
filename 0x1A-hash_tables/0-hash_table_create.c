#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hast;
	unsigned long int i;

	hast = malloc(sizeof(hash_table_t));
	if (hast == NULL)
		return (NULL);

	hast->size = size;
	hast->array = malloc(sizeof(hash_node_t *) * size);
	if (hast->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hast->array[i] = NULL;

	return (hast);
}
