#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: head of the linked list
* @index: index of the nth node
* Return: returns the nth node pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	n = 0;
	node = head;
	while (node)
	{
		if (n == index)
		{
			return (node);
		}
		node = node->next;
		n++;
	}

	return (NULL);
}
