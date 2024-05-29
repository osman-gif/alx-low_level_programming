#include "main.h"
int words(char *);
int get_av_size(char *);


int get_av_size(char *str)
{
	int i, count;

	count = 0;

	for (i = 0; str[i] != 0; i++)
	{
		count++;
	}

	return (count);
}

int words(char *str)
{
	int i, word;

	word = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == 32)
			word++;
	}
	return (word);
}

char **strtow(char *str)
{
	int i, w_count, j;
	char **str_arr;

	w_count = words(str);

	str_arr = (char **)malloc(sizeof(char *) * w_count);

	if (str_arr == NULL)
		printf("NULL\n");
	for (i = 0; str[i] != 0; i++)
	{	
		j = 0;
		while(str[i] != 32 && str[i] != 0)
		{
			/*str_arr[i][j] = str[i];*/
			printf("%c", str[i]);
			j++;
			
			i++;
		}
		putchar(10);
		if (str[i] == 0)
			break;
	}
	return (str_arr);
}
