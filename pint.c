#include <monty.h>

/**
 * pint: prints the value of at the top of te stack, followed by newline
 * @stack: argument 1.
 *
 * Return : EXIT_FAILURE.
 */

void pint(stack_t *stack, unsigned int line_number)
{
	if (stack == NULL)
	{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}

	    printf("%d\n", stack->n);
}

