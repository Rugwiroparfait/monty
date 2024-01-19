#include "monty.h"

/**
 * push: adds new element in stack.
 * @stack
 * @value
 * Return: EXIT_FAILURE
 */

void push(stack_t **stack, int value, unsigned int line_number) 
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fputs("Error: malloc failed\n",sderr);
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

/**
 * pall: opcode prints all the values on the stack, starting from the top.
 * @stack: argment one .
 *
 * Return: elements of stack from the top
 */
void pall(stack_t *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
