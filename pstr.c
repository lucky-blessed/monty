#include "monty.h"
/**
 * gl_pstr - Prints the the string ...
 * @head: stack head
 * @count: counter line
 */
void gl_pstr(stack_t **head, unsigned int count)
{
	stack_t *H;
	(void) count;

	H = *head;
	while (H)
	{
		if (H->n > 127 || H->n <= 0)
		{
			break;
		}
		printf("%c", H->n);
		H = H->next;
	}
	printf("\n");
}
