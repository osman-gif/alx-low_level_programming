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
	int f_desc, written;
	size_t count;

	count = char_count(text_content);
	written = 0;

	f_desc = open(filename,O_CREAT|O_WRONLY, S_IRUSR| S_IWUSR);
	
	printf("f_desc: %d\n", f_desc);	
	written = write(f_desc, text_content, count);

	printf("written: %d count:%lu content:%s descriptor:%d\n", written, count, text_content, f_desc);
	close(f_desc);
	return (1);
}
