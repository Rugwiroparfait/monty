#include <monty.h>

/**
 * swap: swaps the top elements of the stack.
 * @stack: argument psode.
 *
 * @line_number: counter.
 * Return: EXIT_FAILURE or PURPOSE.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
