#include "list.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: Number of elements in the list.
 */

size_t	print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
