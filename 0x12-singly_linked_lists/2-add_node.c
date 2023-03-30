#include "lists.h"
#include <string.h>

/**
* add_node -- add a node at the head of a linked list
* @head: pointer to the pointer to the head of the linked list
* @str: string value of node
* Return: returns a pointer to the head of the array
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    new_node = malloc(sizeof(list_t));

    if(new_node == NULL)
    {
        printf("reached");
        return (NULL);
    }

    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = *head;

    *head = new_node;

    return (new_node);
}