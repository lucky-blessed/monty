#include "monty.h"
/**
 * gl_pint - Function that prints the value at the top of the stack
 * @head: Stack head
 * @count: count the number of lines
 */
void gl_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: cannot pint, stack empty\n", count);
		fclose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
