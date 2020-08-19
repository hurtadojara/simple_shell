#include "shell.h"
/**
*prompt - shows a prompt
* Return: 0 on success
*/
int prompt(void)
{
	_putchar('(');
	_putchar('$');
	_putchar(')');
	_putchar(' ');
	return (0);
}
