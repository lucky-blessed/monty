#include "monty.h"
/**
 * gl_addn - adds the top two elements of the stack.
 * @head: stack head
 * @count: count line number
 */
void gl_add(stact_t **head, unsigned int count)
{
	stack_t *H;
	int lent = 0, TEPM;

	H = *head;
	while (H)
	{
		H = H->next;
		lent++;
	}
	if (lent < 2)
	{
		fclose(box.file);
		free(box.count);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	H = *head;
	TEMP = H-> + H->next->n;
	H->next->n = TEMP;
	*head = H->next;
	free(H);
}
