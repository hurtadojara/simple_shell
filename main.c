#include "shell.h"
/**
*main - principal function
*Return: 0 on succes.
*/
int main(void)
{
while (1)
{
	if (errno == 1)
	{
		exit(1);
	}
	shell_t *data = malloc(sizeof(shell_t));
	int i = 0;

	data = input(data);
	data = tokenizador(data);
	char *str = malloc(sizeof(char) * 100);

	if (data->token[0][0] != '/')
	{
		data = comparador(data);
		data = find(data);
		i = 0;
		if (data->completecommand != NULL)
		{
			while (data->completecommand[0][i] != '\0')
			{
				str[i] = data->completecommand[0][i];
				i++;
			}
		str[i] = '\0';
		free(data->token[0]);
		data->token[0] = strdup(str);
		}
	}
	run(data);
	free(str);

}
return (0);
}
