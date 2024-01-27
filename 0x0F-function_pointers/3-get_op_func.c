#include "3-calc.h"
#include <string.h>


int (*get_op_func(char *s))(int, int)
{
	if (strcmp(s, "+") == 0)
	{
		return (op_add);
	}

	else if (strcmp(s, "-") == 0)
	{
		return (op_sub);
	}

	else if (strcmp(s, "/") == 0)
	{
		return (op_div);
	}

	else if (strcmp(s, "*") == 0)
	{
		return (op_mul);
	}

	else if (strcmp(s, "%") == 0)
	{
		return (op_mod);
	}

	return (NULL);
}

