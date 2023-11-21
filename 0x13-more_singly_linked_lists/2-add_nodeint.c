#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: double pointer to the first node
 * @n: data to be added to the new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *c;
new = malloc(sizeof(listint_t));
if (c == NULL)
return (NULL);

new->n = n;
c->next = *head;
*head = c;

return (c);
}
