#include "shell.h"
/**
 * alternfree - an altern mallocnt for nos working commands
 * @data: struct with data
 * Return: int for erasing status
 */
int alternfree(shell_t *data)
{
	int borrador = 0;

	for (; borrador < data->counter; borrador++)
	{
		free(data->token[borrador]);
	}
	free(data->token);
	borrador = 0;
	for (; borrador < data->counterpath; borrador++)
	{
		free(data->path[borrador]);
	}
	free(data->path);
	free(data->getline);
	free(data);
	return (0);
}
