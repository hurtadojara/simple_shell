#include "shell.h"
/**
*main - principal function
*Return: 0 on succes.
*/
int main(void)
{
	shell_t *data;

while (1)
{

	data = input();
	if (data->getline != NULL)
	{
		if (data->getline[0] == 'e' && data->getline[3] == 't')
		{
			free(data->getline);
			free(data->str);
			free(data);
			exit(0);
		}
	envp(data);
	}
	data = tokenizador(data);
	if (data->token[0][0] != '/')
	{
		data = comparador(data);
		data = find(data);
		if (data->completecommand != NULL)
		{
			while (data->completecommand[0][data->i] != '\0')
			{
				data->str[data->i] = data->completecommand[0][data->i];
				data->i++;
			}
		data->str[data->i] = '\0';
		free(data->token[0]);
		data->token[0] = strdup(data->str);
		}
	}
	run(data);
}
return (0);
}
