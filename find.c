#include "shell.h"
/**
 * find - search for a file in a directory
 * @data: struct with data
 * Return: teh path
 */
shell_t *find(shell_t *data)
{
	DIR *dp;
	struct dirent *dirp;
	int i = 1;

	while (data->path[i] != NULL)
	{
		dp = opendir(data->path[i]);
		if (dp == NULL)
		{
			printf("can't open %s", data->path[i]);
			exit(1);
		}
		while ((dirp = readdir(dp)) != NULL)
		{
			if (!_strcmp(dirp->d_name, data->token[0]))
			{
				closedir(dp);
				data->completecommand = complete_string(data->path[i], data->token[0]);
				return (data);
			}
		}
	closedir(dp);
	i++;
	}
	data->completecommand = NULL;
	return (data);
}
