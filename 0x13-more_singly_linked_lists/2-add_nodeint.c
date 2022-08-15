#include "lists.h"
#include <string.h>

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: head of the node
 * @n: integer
 *Return: the address of the new element if success or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *newNode = malloc(sizeof(listint_t);

if (newNode == NULL)
return (NULL);
newNode->n = n;

newNode->next = (*head);
(*head) = newNode;
return (newNode);
}
