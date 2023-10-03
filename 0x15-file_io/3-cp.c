#include "main.h"
/**
 * main -  Copies the content of a file to another file
 * @argc: Number of argument pass to the program
 * @argv: List of pointers to the argument(strings) passed to the program
 * Return: returns (1);
 */
int main(int argc, char **argv)
{
	char *file_to, *file_from, *buffer;
	int fd_to, fd_from;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024 * sizeof(char));
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDWR);
	if (fd_from == -1 || read(fd_from, buffer, 1024) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_RDWR,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1 || write(fd_to, buffer, 1024) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (1);

}
