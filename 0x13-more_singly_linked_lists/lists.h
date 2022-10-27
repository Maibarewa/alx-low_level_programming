#ifndef LISTS_H
#define LISTS_H

/*
 * flile: lists.h
 * Auth: Isaac Baccah
 * Desc: Header file containing prototype and definations for all fuctions 
 *   and types written in the 0x12-more_singly_linked_lists directory
 *
 */
#include<stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 *
 */
typedf struct list_s
{
	int n;
	struct listint_s *next
}listint_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

#endif /*LISTS_H */
