#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - struct fuction
 * @op: operator
 * @f: pointer to fuction
 *
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
