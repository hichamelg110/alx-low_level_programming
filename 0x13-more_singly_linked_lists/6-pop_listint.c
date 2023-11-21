#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list,
 * @head: double pointer to the first node
 *
 * Return: 0 if the linked list is empty
 * or the integer data from the deleted head node
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;

if (*head == NULL || head) == NULL)
return (0);

tmp = *head;
n = (*head)->n;
*head = (*head)->next;
free(tmp);

return (n);
}
