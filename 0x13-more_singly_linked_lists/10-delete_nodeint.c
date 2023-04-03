#include "lists.h"

/**
* delete_nodeint_at_index - deletes an node at nth index
* @head: start node of the list
* @index: index of the node to be deleted
* Return: 1 is success, -1if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = *head;
	i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	/*check if its head*/
	if(index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while(node)
	{
		if (i == index-1)
		{
			listint_t *del_node;
			listint_t *next_node;

			del_node = node->next;
			if (del_node)
			{
				next_node = del_node->next;
				node->next = next_node;
				free(del_node);
				return (1);
			}
		}
		i++;
		node = node->next;
	}
	return (-1);
}
