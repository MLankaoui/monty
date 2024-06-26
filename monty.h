#ifndef MONTY_HEADER
#define MONTY_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <fcntl.h>
#include <unistd.h>

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

void pall(stack_t **heea__add, unsigned int va_luee);
void push(stack_t **he__aadd, unsigned int val_uee);
int main(int argc, char **argv);
void fre__ee(stack_t **heea__add);
void intt__stack(stack_t **heea__add);
int exec__cutee(stack_t **heea_add, char *linee, unsigned int len);
int read_geet_linee(char **buf_fer, int *len, int file, unsigned int *linee);
char *_strdup(char *str);
int is_buffer_valid(char *buffer);
int _putchar(char c, int fd);
void check_cmd(char *buffer, unsigned int line_number, stack_t **head);
int _puts(char *str, int fd);
void p__int(stack_t **hea__dd, unsigned int value);
void nnooo__pp(stack_t **st___ackk_, unsigned int line_number);

#endif
