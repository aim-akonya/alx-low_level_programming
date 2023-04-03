#include "lists.h"

/**
* sum_listint - returns the summation of all data values
* @head: head of the linked list
* Return: return an int summation
*/
int sum_listint(listint_t *head)
{
    int sum;
    listint_t *node;

    sum = 0;
    node = head;
    while (node)
    {
        sum+=node->n;
        node = node->next;
    }

    return (sum);
}