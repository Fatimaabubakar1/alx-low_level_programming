#include "list.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

typedef struct listint_t {
    int data;
    struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->data);
        h = h->next;
        node_count++;
    }

    return node_count;
}

int main()
{
    listint_t *head = NULL;
    listint_t *second = NULL;
    listint_t *third = NULL;

    head = (listint_t *)malloc(sizeof(listint_t));
    second = (listint_t *)malloc(sizeof(listint_t));
    third = (listint_t *)malloc(sizeof(listint_t));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    size_t count = print_listint(head);
    printf("Number of nodes: %zu\n", count);

    free(head);
    free(second);
    free(third);

    return 0;
}
