#include "lists.h"


/**
* add_node_end -- add a node at the end of a linked list
* @head: pointer to the pointer to the head of the linked list
* @str: string value of node
* Return: returns a pointer to the head of the array
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *tail_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    
    tail_node = *head;
    while (tail_node->next)
    {
        tail_node = tail_node->next;
    }

    tail_node->next = new_node;

    return new_node;
}