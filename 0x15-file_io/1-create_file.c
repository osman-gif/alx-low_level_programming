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
	int f_desc;
	size_t count;

	count = char_count(text_content);

	f_desc = open(filename,O_CREAT|O_WRONLY, S_IRUSR| S_IWUSR);
		
	write(f_desc, text_content, count);

	close(f_desc);
	return (1);
}
