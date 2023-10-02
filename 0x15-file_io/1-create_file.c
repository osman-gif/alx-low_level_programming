#include "main.h"
#include <stdio.h>
size_t char_count(char *text_content)
{
	size_t count, i;

	if (text_content == NULL)
		return (0);
	i = 0;
	count = 0;

	for (; text_content[i]; i++)
	{
		count++;
	}

	return (count);
}
int create_file(const char *filename, char *text_content)
{
	int f_desc, writen;
	size_t count;

	if (filename == NULL)
		return (-1);
	count = char_count(text_content);

	f_desc = open(filename,O_CREAT|O_RDWR, S_IRUSR| S_IWUSR);
		
	writen = write(f_desc, text_content, count);

	if (writen == -1)
		return(-1);
	close(f_desc);
	return (1);
}
