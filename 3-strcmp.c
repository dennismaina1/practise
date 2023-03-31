#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: value of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;
	int comp;

	for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s1[i] == '\0' && s2[j] == '\0')
			{
				comp = 0;
			}
			else if ((s1[i] != '\0' && s2[j] != '\0') && (s1[i] > s2[j]) ||
					(s1[i] != '\0' && s2[j] != '\0') && (s2[j] > s1[i]))
			{
				comp = s1[i] - s2[j];
				break;
			}
		}
		else if ((s1[i] > s2[j]) || (s2[j] > s1[i]))
		{
			comp = s1[i] - s2[j];
			break;
		}
	}
	return (comp);
}
