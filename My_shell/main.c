#include "main.h"

extern char **environ;
int main(void)
{
	int read, i, count, c_count, j, terminate;
	char *lineptr = NULL;
	char **strstr;
	size_t len = 0;
	pid_t ppid;
	pid_t pid;

	count = 0;
	terminate = 0;

	while(terminate == 0)
	{
		printf("($)");
		read = getline(&lineptr, &len, stdin);

		if (read < 0)
		{
			perror("errno");
		}
		pid = fork();

		if(pid == 0)
		{

			strstr = strtow(lineptr);
			if (execve(strstr[0], strstr, environ) == -1)
			{
				perror("Error:");
			}
		}
		int status;
		if (wait(&status) > 0)
		{
			printf("done status: %d\n", status);
		}
		else 
		{
			printf("Not done\n");
		}
		if (lineptr == "^5")
			terminate = 1;

	}

	/*printf("osman:~$");

	  read = getline(&lineptr, &len, stdin);
	  strstr = strtow(lineptr);

	  free(lineptr);

	  printf("strstr[2]: %s\n", strstr[0]);
	  printf("Before execve\n");

	  if (execve(strstr[0], strstr, NULL) == -1)
	  {
	  perror("Error:");
	  }
	  printf("After execve\n");*/
	return (0);
}
