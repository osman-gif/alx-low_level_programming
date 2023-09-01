#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 = s2, neg- if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int sizes1;
	int sizes2;
	int i;
	int res;
	int big;

	sizes1 = 0;
	sizes2 = 0;
	res = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		sizes1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		sizes2++;
	}

	if (sizes1 > sizes2)
	{
		big = sizes2;
	}
	else if (sizes1 < sizes2)
	{
		big = sizes1;
	}
	else
	{
		big = sizes1;
	}

	for (i = 0; i < big; i++)
	{
		res = s1[i] - s2[i];
		return (res);
	}
return (res);
}
