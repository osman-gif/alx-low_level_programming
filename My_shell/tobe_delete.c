#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void cmd_arr(char *ptr);
int main(void)
{
	int read, i, count, c_count, j;
	char *delim, *lineptr = NULL;
	size_t len = 0;
	int *index; 

	delim = " ";
	count = 0;

	printf("osman:~$");

	read = getline(&lineptr, &len, stdin);

	printf("lineptr: %s\n", lineptr);
	for (i = 0; i < read; i++)
	{	
		if (lineptr[i] == 32)
			++count;
	}

	printf("count: %d\n", count);
	index = malloc(sizeof(int) * (count + 1));

	j = 0;
	c_count = 0;
	for (i = 0; i < read; i++)
	{
		c_count++;

		if (lineptr[i] == 32)
		{
			index[j] = c_count;
			printf("c_count: %d\n", c_count);
			c_count = 0;
			j++;
		}

	}
	index[j] = c_count;
	printf("c_count: %d\n", c_count);

	/*char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};*/

	char **argv = malloc(sizeof(char *) * (count + 1));

	for (i = 0; i <= count; i++)
	{
		argv[i] = malloc(index[i] * sizeof(char));
	}
	//argv[i] = malloc(index[i] * sizeof(char));

	for (i = 0; i <= count; i++)
	{
		argv[i] = strtok(lineptr, delim);
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");		

	free(lineptr);
	return (0);
}
