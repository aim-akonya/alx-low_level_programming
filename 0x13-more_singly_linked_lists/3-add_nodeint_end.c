#include "lists.h"

/**
* add_nodeint_end - adds a node int at the ne d of a linked list
* @head: pointer to the  address of the head of the linked list
* @n: value of the new node
* Return: returns address of the new node, or null if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	listint_t *tail_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tail_node = *head;
	while (tail_node->next)
	{
		tail_node = tail_node->next;
	}

	tail_node->next = new_node;
	return (new_node);
}
