#include "shell.h"
/**
 * envp - checks if is asked to print environment
 * Return: 0 on succes
 * @data: info needed to check if its asked to print that
 */
int envp(shell_t *data)
{
	int token = 0, character = 0;

	if (data->getline[0] == 'e' && data->getline[2] == 'v' &&
	data->getline[1] == 'n')
	{
		while (environ[token] != NULL)
		{
			while (environ[token][character] != '\0')
			{
				_putchar(environ[token][character]);
				character++;
			}
			_putchar('\n');
			character = 0;
			token++;
		}
	}
	return (0);
}
