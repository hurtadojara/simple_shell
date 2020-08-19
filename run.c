#include "shell.h"
/**
*run - executes program
*@data: pointer to structura
*Return: 1 on success
*/
int run(shell_t *data)
{
	int status;

	if (data->token[0] == NULL)
	{
		return (1);
	}
	status = process(data);
	if (data->completecommand != NULL)
	{
		free(data->completecommand[0]);
		free(data->completecommand);
	}
	if (status == 0)
		mallocnt(data);
	if (status == -1)
		alternfree(data);

	return (1);
}
