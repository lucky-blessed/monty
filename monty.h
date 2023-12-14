#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcnt1.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - Doubly linked list re
 * @n: integer
 * @prev: Points to
 * @next: Point to the
 *
 * Description: Doubly linked ...
 * for stack, ...
 */

/**
 * struct instruction_s - opcode and its function
 * @opcode: the code
 * @f: function to handle the opcode
 *
 * Description:  opcode and its function
 * for stack, queues, LIFO, FIFO, Holberton project
 */ 
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the code
 * @f: function to handle the opcode
 *
 * Description:  opcode and its function
 * for stack, queues, LIFO, FIFO, Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f) (stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct box_s - variable -args, file, line content
 * @arg: value
 * @file: Pointer to monty file
 * @lifi: flag change stack <-> queue
 * Description: Carries value
 */
typedef struct box_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} box_t;
extern box_t box;

void gl_push(stack_t **head, unsigned int num);
void gl_pall(stack_t **head)
