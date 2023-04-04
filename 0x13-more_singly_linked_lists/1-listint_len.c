#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 *
 * @h: the pointer of the first element of tthe node
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	h = h->next;
		count++;
	}
	return (count);
}

