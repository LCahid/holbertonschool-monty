#include "monty.h"
/**
  * arg_counter - count arguments
  * @str: str for counting arguments
  * @k: length of string
  * Return: number of arguments
  */
size_t arg_counter(char *str, size_t k)
{
	size_t i, l = 0;

	for (i = 1; i < k; i++)
		l += (((str[i - 1] == ' ' || str[i - 1] == '\t'
					|| str[i - 1] == '\n')
					&& (str[i] != ' '
					&& str[i] != '\0'
					&& str[i] != '\n'))
				|| (i == 1 && str[i - 1] != ' '));
	return (l);
}
/**
  * get_command - get command from monty file
  * Return: array which consist of command and argument
  */
char **get_command()
{
	char **arr;
	size_t n = 0, i = 0, k, count;

	k = getline(&buf, &n, f);
	if (k == (size_t)-1)
	{
		fclose(f);
		if (errno == 0)
		{
			free(buf);
			buf = strdup(" ");
			return (NULL);
		}
	}
	count = arg_counter(buf, k);
	if (count == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char *) * (count + 1));
	arr[i++] = strtok(buf, " \n\t");
	while (i < count)
	{
		arr[i++] = strtok(NULL, " \n\t");
	}
	arr[i] = NULL;
	return (arr);
}
