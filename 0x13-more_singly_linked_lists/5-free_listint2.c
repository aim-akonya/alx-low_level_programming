#include "lists.h"

/**
* free_listint2 - free list memory
* @head: head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *val;

	val = *head;
	while (val)
	{
		listint_t *val1;
		val1 = val;
		val = val1->next;
		free(val1);
	}
    *head = NULL;
}
