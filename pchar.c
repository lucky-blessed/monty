#include "monty.h"
/**
 * gl_pchar - Prints char
 * @head: stack head
 * @count: counter
 */
void gl_pchar(stack_t **head, unsigned int count)
{
	stack_t *H;

	H = *head;
	if (!H)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (H->n > 127 || H->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(box.file);
		free(box.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", H->n);
}
