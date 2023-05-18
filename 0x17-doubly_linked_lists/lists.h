#ifndef LIST_H
#define LIST_H

#include <stddef.h>
/**
 * doubly linked list.
 * struct dlistint_s: is a strucutre that contain doubly linked list.
 * @next: This is a pointer that points to the next nod.
 * @prev: This is a pointer that points to the previous node.
 * @p: represents the node
 * Author: mikiashailu.
 */
typedef struct dlistint_s
{
    int p;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
dlistint_t *add_dnodeint_end(dlistint_t **head, const int p);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int p);
size_t dlistint_len(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int p);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
#endif
