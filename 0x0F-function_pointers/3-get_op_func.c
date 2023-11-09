#include "3-calc.h"

/**
*  * get_op_func - selects the correct function to perform
* the operation asked by the user.
* @s: char operator.
*
* Return: Pointer to the function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {

	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;
	i = 0;

	/** while (i < 6)
	// {
	// 	if (s[0] == ops[i])
	// 	break;
	// 	i++;
	// }
	 return (ops[i]);
	*/
	while (ops[i].op != NULL)
    {
        if (s[0] == *(ops[i].op))
            break;
        i++;
    }

    return (ops[i].f);
}

