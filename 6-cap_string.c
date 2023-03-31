#include "main.h"

/**
 * cap_string - function to capitalize each word
 * @str: pointer to string
 * Return: the string with each word capitalized
 */

char *cap_string(char *str)
{
	int i;
	int cap_next = 1;

	i = 0;
	while (str[i] != '\0')
	{
		if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		cap_next = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')'; ||
				str[i] == '{' || str[i] == '}');
		i++;

	}
	return (str);

}
