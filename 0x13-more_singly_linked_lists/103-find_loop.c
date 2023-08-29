#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *current = head;
    listint_t *temp;

    while (current != NULL)
    {
        temp = current->next;
        if (temp == head)
            return (temp);
        current->next = head;
        current = temp;
    }

    return (NULL);
}

