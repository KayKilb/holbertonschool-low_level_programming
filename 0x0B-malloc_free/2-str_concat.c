#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	array = (char *)malloc(((i + j) + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		array[i] = s2[j];
		i++;
	}
	return (array);
}
