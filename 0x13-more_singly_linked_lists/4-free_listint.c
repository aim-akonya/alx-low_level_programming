#include "lists.h"

/**
* free_listint - free memory of lists
* @head: head of the list
*/
void free_listint(listint_t *head)
{
    listint_t *val;

	val = head;
	while (val)
	{
		listint_t *val1;

		val1 = val;
		val = val1->next;
		free(val1);
	}
}