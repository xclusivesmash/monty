#ifndef MONTY_H
#define MONTY_H

/********************** MACROS **********************/
#define BUFF_SIZE 10000

/********************** LIBRARIES **********************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/********************** STRUCTURES ***********************/
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

/********************** PROTOTYPES ***********************/
int _read_file(char *filename, char **buffer);
int _add_nodeint_end(stack_t **head, int n);
void _delete_node_end(stack_t **head);
void _free_linked_list(stack_t **head);
int _token_check(char **buff);
int _number_check(const char *n);
void _push(stack_t **head, unsigned int line_number, const char *n);
int _isdigit(int c);
void (*_op_selection(char *token))(stack_t **stack, unsigned int line_number);
void _pop(stack_t **head, unsigned int line_number);
void _pall(stack_t **head, unsigned int line_number);
void _pint(stack_t **head, unsigned int line_number);
void _swap(stack_t **head, unsigned int line_number);
void _add(stack_t **head, unsigned int line_number);
void _sub(stack_t **head, unsigned int line_number);
void _mul(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void _mod(stack_t **head, unsigned int line_number);
void _pchar(stack_t **head, unsigned int line_number);
void _pstr(stack_t **head, unsigned int line_number);
void _nop(stack_t **head, unsigned int line_number);
void _rotl(stack_t **head, unsigned int line_number);
void _rotr(stack_t **head, unsigned int line_number);

#endif /* MONTY_H */
