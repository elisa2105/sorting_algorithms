#include "sort.h"

/**
 * insertion_sort_list - sorts a d-linked list using insertion sort
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
listint_t *tmp = NULL;
listint_t *next = NULL;

if (list  == NULL || (*list) == NULL || ((*list)->next) == NULL)
return;
tmp = *list;
while (tmp->next)
{
next = tmp->next;
sortList(list, next);
tmp = next;
}
}


/**
 * sortList - iterate the list and swaps if needed
 * @list: exit point
 * @node: node to compare
 */
void sortList(listint_t **list, listint_t *node)
{
listint_t *prev1 = NULL;
listint_t *double_prev = NULL;
listint_t *double_next = NULL;

prev1 = node->prev;
while (prev1)
{
if (prev1->n > node->n)
{
double_prev = prev1->prev;
double_next = node->next;
node->next = prev1;
prev1->prev = node;
if (!double_prev)
{
*list = node;
(*list)->prev = NULL;
}
else
{
node->prev = double_prev;
double_prev->next = node;
}
if (double_next)
{
prev1->next = double_next;
double_next->prev = prev1;
}
else
prev1->next = NULL;
print_list((const listint_t *)*list);
}
else
return;
prev1 = node->prev;
}
}
