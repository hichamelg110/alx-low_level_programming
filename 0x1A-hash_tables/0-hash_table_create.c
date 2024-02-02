#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: The size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table.
 * If memory allocation fails, returns NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newHashTable;
unsigned long int i;

newHashTable = malloc(sizeof(hash_table_t));
if (newHashTable == NULL)
return (NULL);
newHashTable->size = size;
newHashTable->array = malloc(sizeof(hash_node_t *) * size);
if (newHashTable->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
newHashTable->array[i] = NULL;

return (newHashTable);
}
