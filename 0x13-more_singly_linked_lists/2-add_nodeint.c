#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: the pointer to the first item of the node
  * @n: integer
  * Return: 0
  * NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
