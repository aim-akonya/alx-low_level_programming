#include "lists.h"

/**
* add_nodeint - add a node to the head of the list
* @head: head of the linked list
* @n: an int value of thenew head
* Return: return a pointer to the head of the linked list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
