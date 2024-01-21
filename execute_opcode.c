void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add" , add},
		{"nop" , nop},
		{NULL, NULL}
	};
	int i = 0;
	while (instruction[i].opcode != NULL)
	{
		if (strmp(opcode, instruction[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
		i ++;
	}
	
	fprintf(stderr, "L%d unknown instruction %s\n",line_number,opcode);
	exit(EXIT_FAILURE);
}
