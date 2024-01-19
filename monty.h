#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
void push(stack_t **stack, int value,unsigned int line_number);
void pall(stack_t *stack);
void pint(stack_t *stack,unsigned int line_number);
void pop(stack_t **stack),unsigned int line_number;
void swap(stack_t **stack, unsigned int line_number);
endif /* MONTY_h */
