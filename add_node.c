#include "monty.h"
/**
 * gl_add_node - add node to the head stack
 * @head: head of the stack
 * @n: new_value
*/
void gl_add_node(stack_t **head, int n)
{
	stack_t *NODE_NEW, *X;

	X = *head;
	NODE_NEW = malloc(sizeof(stack_t));
	if (NODE_NEW == NULL)
	{ printf("Error\n");
		exit(0); }
	if (X)
		X->prev = NODE_NEW;
	NODE_NEW->n = n;
	NODE_NEW->next = *head;
	NODE_NEW->prev = NULL;
	*head = NODE_NEW;
}
