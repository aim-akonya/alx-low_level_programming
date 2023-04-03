#include "lists.h"

/**
* print_listint - prints a list of nodes of the linked list
* @h: pointer to the header of the linked list
* Return: return the size of the linked list
*/
size_t print_listint(const listint_t *h)
{
    listint_t *node;
	size_t node_c;

	node_c = 0;
	node = NULL;

	if (h)
	{
		printf("%d\n", h->n);
		node_c++;
		node = h->next;
	}

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		node_c++;
	}
	return (node_c);
}