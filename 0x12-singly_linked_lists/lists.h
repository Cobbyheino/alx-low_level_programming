#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: the length of the string
 * @next: points next  node
 *
 * Dscrition: singly linked list node structure
 *
 */

typedef struct list_s

{
	unsigned int len;
	char *str;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);


#endif
