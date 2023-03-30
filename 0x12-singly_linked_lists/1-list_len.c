#include "lists.h"


size_t list_len(const list_t *h)
{
    list_t *node;
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
