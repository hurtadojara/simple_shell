#include "shell.h"
/**
 * process - execute fork and execve
 * @data: data struct
 * Return: an int for erasing
 */
int process(shell_t *data)
{
	pid_t pid;
	int estado = 10;

	pid = fork();
	if (pid == 0)
	{
		if (_strcmp(data->token[0], "exit") == 0)
		{
			printf("Bye\n");
			exit(1);
		}
		if (execve(data->token[0], data->token, NULL) == -1)
		{
			perror("shs");
			return (-1);
		}
	}
	else if (pid < 0)
	{
		perror("shs");
		return (-1);
	}
	else
	{
			waitpid(pid, &estado, WUNTRACED);
	}
	return (0);
}
