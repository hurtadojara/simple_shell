#include "shell.h"
/**
 * complete_string - append command to direction
 * @stringpath: path
 * @command: command
 * Return: the command appended
 */
char **complete_string(char *stringpath, char *command)
{
	char **arraystr = malloc(sizeof(char *) * 1);
	char *completestr = malloc(sizeof(char) * 100);
	int i = 0, j = 0, k = 0;

	if (arraystr == NULL)
	{
		perror("hsh: error almacenamiento\n");
		free(arraystr);
		exit(EXIT_FAILURE);
	}
	if (completestr == NULL)
	{
		perror("hsh: error almacenamiento\n");
		free(completestr);
		exit(EXIT_FAILURE);
	}
	while (stringpath[i] != '\0')
	{
		completestr[j] = stringpath[i];
		i++;
		j++;
	}
	completestr[j] = '/';
	j++;
	while (command[k] != '\0')
	{
		completestr[j] = command[k];
		k++;
		j++;
	}
	completestr[j] = '\0';
	arraystr[0] = _strdup(completestr);
	free(completestr);
	return (arraystr);
}
