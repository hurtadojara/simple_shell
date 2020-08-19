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
	if (errno == 1)
	{
		exit(1);
	}
	int i = 0;

	data = input();
	data = tokenizador(data);
	if (data->token[0][0] != '/')
	{
		data = comparador(data);
		data = find(data);
		i = 0;
		if (data->completecommand != NULL)
		{
			while (data->completecommand[0][i] != '\0')
			{
				data->str[i] = data->completecommand[0][i];
				i++;
			}
		data->str[i] = '\0';
		free(data->token[0]);
		data->token[0] = strdup(data->str);
		}
	}
	run(data);
}
return (0);
}
