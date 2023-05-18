#ifndef LIST_H
#define LIST_H
#include <stddef.h>
/**
 * project: double linked list.
 * struct dlistint_s: This represents a doubly linked list.
 * @next: points to the next node.
 * @prev: points to the previous node.
 * @n: This is the node.
 * Autor: mikiasHailu.
 */
typedef struct dlistint_s
{
    struct dlistint_s *next;
    struct dlistint_s *prev;
    int n;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif