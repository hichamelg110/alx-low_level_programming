#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to the list_t list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *c;
unsigned int leng = 0;

while (str[leng])
leng++;
c = malloc(sizeof(list_t));
if (c == NULL)
return (NULL);

c->str = strdup(str);
c->len = leng;
c->next = (*head);
(*head) = c;

return (*head);
}
