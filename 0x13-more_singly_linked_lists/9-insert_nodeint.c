#include "lists.h"

/**
* insert_nodeint_at_index - inserts a node at a specific index idx
* @head: start node of the list
* @idx: index of node isertion point
* @n: value of the new node;
* Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *node;
    listint_t *new_node;

    i=0;
    node = *head;
    new_node = malloc(sizeof(listint_t));
    new_node->n = n;
    new_node->next = NULL;
    

    /*add to head*/
    if (idx == 0)
    {
        new_node->next = node;
        *head = new_node;
        return (*head);
    }


    while (node)
    {
        if (i == idx - 1)
        {
            listint_t *next_node;

            next_node = node->next;
            node->next = new_node;
            new_node->next = next_node;
            return (node->next);
        }
        node = node->next;
        i++;
    }

    return (NULL);
}