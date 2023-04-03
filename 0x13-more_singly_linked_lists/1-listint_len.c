#include "lists.h"

/**
* listint_len - counts the number of nodes in a linked list
* @h: pointer to the header of the linked list
* Return: return the size of the linked list
*/
size_t listint_len(const listint_t *h)
{
    listint_t *node;
	size_t node_c;

	node_c = 0;
	node = NULL;

	if (h)
	{
		node_c++;
		node = h->next;
	}

	while (node)
	{
		node = node->next;
		node_c++;
	}
	return (node_c);
}