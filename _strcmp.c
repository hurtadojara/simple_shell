#include "shell.h"
/**
 * _strcmp - compares strings
 * @str1: a string
 * @str2: another string
 * Return: 0 if yes, other, no
 */
int _strcmp(char *str1, char *str2)
{
	int c = 0;

	while (str1[c] == str2[c])
	{
		if (str1[c] == '\0' || str2[c] == '\0')
		break;
		c++;
	}
	if (str1[c] == '\0' && str2[c] == '\0')
		return (0);
	else
		return (-1);
}
