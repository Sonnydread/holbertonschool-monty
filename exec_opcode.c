#include "monty.h"

/**
 * exec_opcode - exec
 * @opcode: to execute
 *
 * Return: void
 */

void exec_opcode(char *opcode)
{
unsigned int counter = 0;

instruction_t opcode_list[] = {
{"push", push_op},
{"pall", pall_op},
{"pint", pint_op},
{"pop", pop_op},
{"swap", swap_op},
{"add", add_op},
{"nop", nop_op},
{"sub", f_sub},
{"div", x_div},
{"mul", z_mul},
{"mod", s_mod},
{"pchar",v_pchar},
{"pstr",w_pstr},
{"rotl",q_rotl},
{"rotr",j_rotr},
{NULL, NULL}
};

while ((opcode_list[counter].opcode != NULL))
{
if (strcmp(opcode, opcode_list[counter].opcode) == 0)
{
opcode_list[counter].f(&var.head, var.line_num);
return;
}
counter++;
}

fprintf(stderr, "L%u: unknown instruction %s\n", var.line_num, opcode);
fclose(var.fp);
exit(EXIT_FAILURE);
}
