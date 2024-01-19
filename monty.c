#include "monty.h"

/**
 * push: adds new element in stack.
 * @stack
 * @value
 *
 * Return: EXIT_FAILURE
 */
void push(stack_t **stack, int value,unigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
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
		printf("%d\n",stack ->n);
		stack = stack->next;
	}
}

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
		fprintf(stderr, "L<line_number>: can't pint, stack empty\n",line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", stack->n);
}

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
		fprint(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack =(*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}

	free(temp);
}
