#include "shell.h"
/**
 * getp - return path variable
 * Return: pathv
 */
char *getp()
{
	int i;

	for (i = 0 ; environ[i] != NULL ; i++)
	{
		if (environ[i][0] == 'P' && environ[i][1] == 'A' && environ[i][2] == 'T')
		{
			return (environ[i]);
		}
	}
	return ("falla con variables de entorno");
}
