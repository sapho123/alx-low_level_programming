#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: The pointer to the first item of the node
  * @n: integer
  * Return: 0
  * NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n;
	listint_t *t;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);
	n->n = n;
	n->next = NULL;
	if (*head == NULL)
	{
	*head = n;
		return (n);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = n;
	return (n);
}
