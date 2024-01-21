#include "monty.h"

#define BUFFER_SIZE 1024

void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	
	/**stack initialization **/
	stack_t *stack = NULL;

	char buffer[BUFFER_SIZE];
	char *token, *opcode;
	while (fgets(buffer, sizeof(buffer), file) != NULL)
	{
		/** Tokenize the line **/
		token = strtok(buffer, "\t\n");

		/** Skip empty lines and comments **/
		if (token == NULL || token[0] == '#')
			continue;

		/** The first token is the opcode **/
		opcode = token;
		/** Execute the opcode **/
	}

	/** clean up & close the file **/
	fclose(file);

	return EXIT_SUCCESS;
}


