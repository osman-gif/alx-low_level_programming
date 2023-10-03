#include "main.h"
#include <stdio.h>

/**
 * char_count - count the number of characters in the text_content string
 * @text_content: Pointer to a string
 *
 * Return: Return number of characters in the string
 */

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

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: Name of the file (path)
 * @text_content: Pointer to the text
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int f_desc;
	size_t count;

	count = char_count(text_content);

	f_desc = open(filename, O_APPEND | O_WRONLY, S_IRUSR | S_IWUSR);

	if (f_desc == -1)
		return (-1);

	if (write(f_desc, text_content, count) == -1)
		return (-1);

	close(f_desc);
	return (1);
}
