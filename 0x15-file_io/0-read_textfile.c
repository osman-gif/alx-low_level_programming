#include "main.h"
#include <stdio.h>
/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: Pointer to the file to be read
 * @letters: Count of the letters to be read
 * Return: Returns the count of the read letters on success and 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_desc;
	size_t count;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) *(int) letters);

	if (buf == NULL)
		return (0);

	f_desc = open(filename, O_RDWR);

	if (f_desc == -1)
		return (0);

	count = read(f_desc, buf, letters);

	if ((int)count ==  -1)
		return (0);

	if ((int)write(1, buf, letters) == -1)
		return (0);

	free(buf);

	close(f_desc);
	return (count);
}
