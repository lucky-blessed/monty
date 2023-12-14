#include "monty.h"
/**
 * gl_queue - prints the top
 * @head: stack head
 * @count: line number counter
 * Return: 0
*/
void gl_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	box.LIFO = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: 0
*/
void gl_add_queue(stack_t **head, int n)
{
	stack_t *NODE_NEW, *X;

	X = *head;
	NODE_NEW = malloc(sizeof(stack_t));
	if (NODE_NEW == NULL)
	{
		printf("Error\n");
	}
	NODE_NEW->n = n;
	NODE_NEW->next = NULL;
	if (X)
	{
		while (X->next)
			X = X->next;
	}
	if (!X)
	{
		*head = NODE_NEW;
		NODE_NEW->prev = NULL;
	}
	else
	{
		X->next = NODE_NEW;
		NODE_NEW->prev = X;
	}
}
