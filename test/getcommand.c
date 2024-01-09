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
		l += ((str[i - 1] == ' ' && str[i - 1] == '\t' 
					&& str[i - 1] == '\n')
					&& (str[i] != ' ' 
					&& str[i] != '\0' 
					&& str[i] != '\n') 
				|| (i == 1 && str[i - 1] != ' ');
	return (l);
}
		
/**
  * get_command - get command from monty file
  * @path: file location
  * Return: array which consist of command and argument
  */
char **get_command(FILE *f, char **buf)
{
	char **arr;
	size_t n, i = 0, k, count;

	*buf = malloc(1);
	if (*buf == NULL)
	{
		fclose(f), dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	k = getline(&buf, &n, f);
	if (k == -1)
	{
		fclose(f);
		if (errno == 0)
		{
			*buf = strdup(" ");
			return (NULL);
		}
	}
	count = arg_counter(buf, k);
	if (count == 0)
	{
		free(buf);
		return (NULL)
	}
	
