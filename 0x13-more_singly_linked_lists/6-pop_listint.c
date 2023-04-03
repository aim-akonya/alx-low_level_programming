#include "lists.h"

/**
* pop_listint - pop the head of a list
* @head: head of the list
* Return: return the heads node data, or 0 if null
*/
int pop_listint(listint_t **head)
{
    listint_t *new_head;
    listint_t *curr_head;
    int n;

    if(*head == NULL)
    {
        return (0);
    }
    curr_head = *head;
    new_head = curr_head->next;
    *head = new_head;
    n = curr_head->n;
    free(curr_head);
    return (n);
}