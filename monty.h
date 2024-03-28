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

void pall(stack_t **heaa__d, unsigned int valu__ee);
void push(stack_t **he__aadd, unsigned int val_uee);
int main(int argc, char **argv);
int process(const char *filename);
void fre__ee(stack_t **hea__add);
void int_stack(stack_t **head);
int exec__cuu__uuutee(stack_t **head, char *line, unsigned int len);
int read_geet_linee(char **line__buff, size_t *bsize, FILE *input_str_eam)

#endif
