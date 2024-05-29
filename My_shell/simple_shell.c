#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes arguments and store them in in array of chars
 * @argc: Stores tne Number of arguments passed to the program
 * @argv: Constist of the list of the passed arguments
 * Return: Returns number of argumets
 */

int main(int argc, char **argv)
{
	int i, j, count, k;
	char *cmd;

	count = 0;

	for (i = 1; argv[i]; i++)
        {
                j = 0;
                while(argv[i][j])
                {
			count++;
                        j++;
                }
                count++;
        }

	cmd = malloc(count * sizeof(char));

	if (cmd == NULL)
		printf("Failed\n");
	k = 0;
	for (i = 1; argv[i]; i++)
	{
		j = 0;
		while(argv[i][j])
		{
			cmd[k] = argv[i][j];
			j++;
			k++;
		}
	}

	printf("%s\n", cmd);
	return (0);
}
