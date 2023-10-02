#include "main.h"
#include <stdio.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Pointer to the file to be read
 * @letters: Count of the letters to be read
 * Return: Returns the count of the read letters on success and 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_desc;
       	size_t count;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
		return (0);

	f_desc = open(filename, O_CREAT);
	printf("f_desc:%d\n", f_desc);
	count = read(f_desc, buf, letters);
	write(1, buf, letters);

	if (count == (size_t) -1)
	{
		return (0);
	}
	close(f_desc);
	return (count);
}
