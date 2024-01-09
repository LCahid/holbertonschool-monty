#include "monty.h"
#include <ctype.h>
/**
  * isnum - check string is number or not
  * @str: string
  * Return: 0 if not number else 1
  */
int isnum(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
