#include "hash_tables.h"

shash_table_t *sorted_hash_table_create(unsigned long int size);
int sorted_hash_table_set(shash_table_t *ht, const char *key, const char *value);
char *sorted_hash_table_get(const shash_table_t *ht, const char *key);
void sorted_hash_table_print(const shash_table_t *ht);
void sorted_hash_table_print_rev(const shash_table_t *ht);
void sorted_hash_table_delete(shash_table_t *ht);

/**
 * sorted_hash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *sorted_hash_table_create(unsigned long int size)
{
shash_table_t *newHashTable;
unsigned long int i;

newHashTable = malloc(sizeof(shash_table_t));
if (newHashTable == NULL)
return (NULL);

newHashTable->size = size;
newHashTable->array = malloc(sizeof(shash_node_t *) * size);
if (newHashTable->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
newHashTable->array[i] = NULL;
newHashTable->shead = NULL;
newHashTable->stail = NULL;

return (newHashTable);
}

/**
 * sorted_hash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int sorted_hash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *newNode, *tempNode;
char *value_copy;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

value_copy = strdup(value);
if (value_copy == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
tempNode = ht->shead;
while (tempNode)
{
if (strcmp(tempNode->key, key) == 0)
{
free(tempNode->value);
tempNode->value = value_copy;
return (1);
}
tempNode = tempNode->snext;
}

newNode = malloc(sizeof(shash_node_t));
if (newNode == NULL)
{
free(value_copy);
return (0);
}
newNode->key = strdup(key);
if (newNode->key == NULL)
{
free(value_copy);
free(newNode);
return (0);
}
newNode->value = value_copy;
newNode->next = ht->array[index];
ht->array[index] = newNode;

if (ht->shead == NULL)
{
newNode->sprev = NULL;
newNode->snext = NULL;
ht->shead = newNode;
ht->stail = newNode;
}
else if (strcmp(ht->shead->key, key) > 0)
{
newNode->sprev = NULL;
newNode->snext = ht->shead;
ht->shead->sprev = newNode;
ht->shead = newNode;
}
else
{
tempNode = ht->shead;
while (tempNode->snext != NULL && strcmp(tempNode->snext->key, key) < 0)
tempNode = tempNode->snext;
newNode->sprev = tempNode;
newNode->snext = tempNode->snext;
if (tempNode->snext == NULL)
ht->stail = newNode;
else
tempNode->snext->sprev = newNode;
tempNode->snext = newNode;
}

return (1);
}

/**
 * sorted_hash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *sorted_hash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);
node = ht->shead;
while (node != NULL && strcmp(node->key, key) != 0)
node = node->snext;

return ((node == NULL) ? NULL : node->value);
}
/**
 * sorted_hash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void sorted_hash_table_print(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
return;
node = ht->shead;
printf("{");
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->snext;
if (node != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * sorted_hash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void sorted_hash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
return;

node = ht->stail;
printf("{");
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->sprev;
if (node != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * sorted_hash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void sorted_hash_table_delete(shash_table_t *ht)
{
shash_table_t *head = ht;
shash_node_t *node, *tempNode;

if (ht == NULL)
return;

node = ht->shead;
while (node)

tempNode = node->snext;
free(node->key);
free(node->value);
free(node);
node = tempNode;


free(head->array);
free(head);
}

