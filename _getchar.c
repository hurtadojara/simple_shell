#include "shell.h"
/**
* _getchar - take a char fron stdin
*
* Return: buffer
*/
int _getchar(void)
{
	static char buf[BUFSIZ];
	static char *bufp = buf;
	int i = 0;	if (i == 0)
	{
		i = read(0, buf, 1);
		bufp = buf;
	}
	if (--i >= 0)
	{
		return (*bufp++);
	}
	return (EOF);
}
