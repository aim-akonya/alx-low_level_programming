#include "lists.h"

/**
* free_list - free lists
* @head: head of the linked lists
* Return: returns void
*/
void free_list(list_t *head)
{
    list_t *val;
    
    val = head;
    while(val)
    {
        list_t *val1;
        
        val1 = val;
        val = val1->next;

        free(val1->str);
        free(val1);
    }

}