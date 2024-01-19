#include "monty.h"

/**
 * pop: removes the top elemnt of the stack
 * @stack: argument node.
 *
 * Return : EXIT_FAILURE on failue
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", Line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = (*stack) -> next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}

	free(temp);
}
