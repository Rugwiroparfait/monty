# 0x19. C - Stacks, Queues - LIFO, FIFO

**Author: NSANZIMANA RUGWIRO Dominique Parfait**

## Overview

This project is a group project in the context of the C programming language, focusing on the implementation of stacks and queues using LIFO (Last In, First Out) and FIFO (First In, First Out) principles. The project involves creating an interpreter for Monty ByteCodes files, a scripting language compiled into Monty byte codes. The interpreter manipulates a unique stack with specific instructions.

## Learning Objectives

By the end of this project, you are expected to:

- Understand the concepts of LIFO and FIFO.
- Comprehend the implementation of stacks and queues.
- Gain knowledge about common use cases and implementations of stacks and queues.
- Learn the proper usage of global variables.
- Understand and follow coding standards using the Betty style.
- Effectively use external variables to share data between source files in C.

## Requirements

- Allowed editors: vi, vim, emacs.
- Compilation using gcc on Ubuntu 20.04 LTS with specific options.
- Code files to end with a new line.
- Mandatory README.md file at the root of the project folder.
- Code following the Betty style, checked using betty-style.pl and betty-doc.pl.
- Maximum of one global variable allowed.
- No more than 5 functions per file.
- C standard library allowed.
- Prototypes of all functions included in the header file (monty.h).
- Usage of include guards in header files.
- Tasks to be completed in the order specified in the project.
- Project repository to be hosted on GitHub (one repository per group).

## Data Structures

Please use the following data structures for this project:

```c
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

## Compilation & Output

Compile your code using the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

Output should be printed on stdout, and any error message must be printed on stderr.

## Usage

Run the monty program with the following command:

```bash
$ ./monty file
```

Where 'file' is the path to the file containing Monty byte code.

If no file or more than one argument is provided, print the error message `USAGE: monty file` and exit with status EXIT_FAILURE.

If it's not possible to open the file, print the error message `Error: Can't open file <file>` and exit with status EXIT_FAILURE.

If the file contains an invalid instruction, print the error message `L<line_number>: unknown instruction <opcode>` and exit with status EXIT_FAILURE.

## Tasks

### 0. push, pall

Implement the push and pall opcodes.

#### The `push` opcode

- Usage: `push <int>` where `<int>` is an integer.
- Print error message if `<int>` is not an integer or if no argument is given to push.

#### The `pall` opcode

- Usage: `pall`
- Print all values on the stack, starting from the top.

### 1. pint

Implement the pint opcode.

#### The `pint` opcode

- Usage: `pint`
- Print the value at the top of the stack, followed by a new line.

### 2. pop

Implement the pop opcode.

#### The `pop` opcode

- Usage: `pop`
- Remove the top element of the stack.

### 3. swap

Implement the swap opcode.

#### The `swap` opcode

- Usage: `swap`
- Swap the top two elements of the stack.

### 4. add

Implement the add opcode.

#### The `add` opcode

- Usage: `add`
- Add the top two elements of the stack.

### 5. nop

Implement the nop opcode.

#### The `nop` opcode

- Usage: `nop`
- Does nothing.

## Copyright - Plagiarism

Avoid plagiarism and adhere to the guidelines provided. Any form of plagiarism is strictly forbidden and will result in removal from the program. You are expected to solve the tasks independently to meet the learning objectives.

## Acknowledgments

The project resources include:

- Google
- How do I use extern to share variables between source files in C?
- Stacks and Queues in C
- Stack operations
- Queue operations

## GitHub Repository

[Monty Project Repository](https://github.com/rugwiroparfait003/monty)

Feel free to update the repository link with your actual GitHub repository.
