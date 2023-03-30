#include "lists.h"

/**
* print_list - prints all the elements of a list
* @h: pointer to the head of the linked list
* Return: returns the size of the linked list
*/
size_t print_list(const list_t *h)
{
    list_t *node;
    size_t node_c;

    node_c = 0;
    node = h->next;

    if (h)
    {
        if(h->str)
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        else
        {
            printf("[%d] (%s)\n", 0, "nil");
        }
        node_c++;
        node = h->next;
    }

    while(node)
    {
        if(node->str)
        {
            printf("[%d] %s\n", node->len, node->str);
        }
        else
        {
            printf("[%d] (%s)\n", 0, "nil");
        }
        node = node->next;
        node_c++;
    }


    return node_c;
}
