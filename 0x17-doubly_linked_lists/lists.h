#ifndef LIST_H
#define LIST_H
#include <stddef.h>
/**
 * project: double linked list.
 * struct dlistint_s: This represents a doubly linked list.
 * @next: points to the next node.
 * @prev: points to the previous node.
 * @z: This is an integer.
 * Autor: mikiasHailu.
 */
typedef struct dlistint_s
{
    struct dlistint_s *prev;
    struct dlistint_s *next;
    int z;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int z);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int z);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int z);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif
