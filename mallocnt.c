#include "shell.h"
/**
*mallocnt - frees memory
*@datos: pointer to struct
*Return: 0 on success
*/
int mallocnt(shell_t *datos)
{
	int borrador = 0;

	for (; borrador < datos->counter; borrador++)
	{
		free(datos->token[borrador]);
	}
	free(datos->token);
	borrador = 0;
	for (; borrador < datos->counterpath; borrador++)
	{
		free(datos->path[borrador]);
	}
	free(datos->str);
	free(datos->path);
	free(datos->getline);
	free(datos);
	return (0);
}
