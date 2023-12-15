#include "monty.h"
/**
 * gl_pop - Removes the top ...
 * @head: stack head
 * @count: cout line number
 */
void gl_pop(stack_t **head, unsigned int count)
{
	stack_t *H;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(box.file);
		free(box.content);
		gl_stack(*head);
		exit(EXIT_FAILURE);
	}
	H = *head;
	*head = H->next;
	free(H);
}
