#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: double pointer to the first node
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head != NULL)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
}
