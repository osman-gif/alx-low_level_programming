#include "main.h"

char ** strtow(char *str)
{
	char **strw;
	int i, words, j, k;
	int * c_index;

	k = 0;
	words = countw(str);
	c_index = countc(str);

	printf("words: %d\n", words);	
	strw = malloc(sizeof(char *) * words);

	for (i = 0; i < words; i++)
	{
		strw[i] = malloc(sizeof(char) * c_index[i]);
		printf("c_index[%d]: %d\n", i, c_index[i]);
	}

	for (i = 0; i < words; i++)
	{
		for (j = 0; j < c_index[i]; j++, k++)
		{
			if (str[k] != 32 && str[k] != '\0' && str[k] != '\n' && str[k] != ':')
			{
				strw[i][j] = str[k];
				printf("strw[%d][%d]: :%c:\n", i, j, strw[i][j]);
			}
		}
	}
	strw[i] = NULL;

	return (strw);

}

int countw(char *str)
{
	int count, i;

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			count++;
		}

	}

	if (!str[i])
		count++;

	return (count);
}

int *countc(char *str)
{
	int i, count, countwd, j;
	int *index;

	countwd = countw(str);
	index = malloc(sizeof(int) * countwd);
	count = 0;

	for (i = 0, j = 0; str[i]; i++)
	{
		count++;

		if (str[i] == 32)
		{
			index[j] = count;
			j++;
			count = 0;
		}		
	}
	index[j] = count;

	return (index);
}
