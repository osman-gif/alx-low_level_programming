#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments passed to the program.
 * @av: The actual arguments passed to the program.
 * Return:Returns A pointer to the concatenated string or NULL otherwise.
 */
char *argstostr(int __attribute__((unused)) ac, char **av)
{
	int __attribute__((unused)) i, j, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = get_str_size(ac, av);

	str = malloc(sizeof(char) * (size) + (ac + 1));

	if (str == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != 0)
		{
			str[size++] = av[i][j++];
		}

		if (av[i][j] == 0)
		{
			str[size++] = '\n';
		}
	}

	return (str);
}

/**
 * get_str_size - Counts the number of characters passed the program.
 * @ac: Number of arguments passed to the program.
 * @av: The actual arguments passed to the program.
 * Return: Returns the number of characters passed to the program.
 */
int get_str_size(int ac, char __attribute__((unused)) **av)
{
	int __attribute__((unused)) i, j, count, c;

	count = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j++] != '\0')
		{
			count++;
		}
	}

	return (count);
}
