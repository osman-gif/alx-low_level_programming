#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>

extern char **environ;


#include "main.h"


/**
 * _strcat - concatnate two stings
 * @src: pointer to the string to be appended @dest
 * @dest: pointer to the string to append @src to
 * Return: pointer to the concatenated string @dest
 */

char *_strcat(char *dest, char *src)
{
        int i, j;

        for (j = 0; *(dest + j) != '\0'; j++)
        {
        }

        for (i = 0;;)
        {
                *(dest + j) = *(src + i);
                if (*(src + i) == '\0')
                {
                        return (dest);
                }
                i++;
                j++;
        }
        return (dest);
}

int _countw(char *str);
int *_countc(char *str);

char ** _strtow(char *str, int *count)
{
	char **strw;
	int i, words, j, k;
	int * c_index;

	k = 0;
	words = _countw(str);
	*count = words;
	c_index = _countc(str);

	printf("words: %d count %d\n", words, *count);
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
			if (str[k] != ':')
			{
				strw[i][j] = str[k];
				printf("strw[%d][%d]: :%c:\n", i, j, strw[i][j]);
			}
		}
	}
	strw[i] = NULL;

	return (strw);

}

int _countw(char *str)
{
	int count, i;

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == 32 || str[i] == ':')
		{
			count++;
		}

	}

	if (!str[i])
		count++;

	return (count);
}

int *_countc(char *str)
{
	int i, count, countwd, j;
	int *index;

	countwd = _countw(str);
	index = malloc(sizeof(int) * countwd);
	count = 0;

	for (i = 0, j = 0; str[i]; i++)
	{
		count++;

		if (str[i] == ':')
		{
			index[j] = count;
			j++;
			count = 0;
		}
	}
	index[j] = count;

	return (index);
}


int main(void)
{
	int i, count, j;
	struct stat st;
	char *HOME = getenv("PATH");
	char **strstr;
	DIR *dir;
	struct dirent *mdir;
	char *cmd;

	//count = malloc(sizeof(int));	
	strstr = _strtow(HOME, &count);


	i = 0;
	j = 0;
	int k = 0;
	/*
	for (i = 6; i < 7; i++)
	{
		while(strstr[i][j])
		{
			cmd[k] = strstr[i][j];
			j++;
			k++;
		}
	}
	cmd[k++] = '/';
	cmd[k++] = 'l';
	cmd[k] = 's';
	i = 0;
	*/
	k = 0;
	while (i < count)
	{
		dir = opendir(strstr[i]);
		printf("IN THIS DIRECTORY: %s\n", strstr[i]);

		cmd = _strcat(strstr[i], "/ls");
		while((mdir = readdir(dir)) != NULL)
		{

			/*if((char*)mdir->d_name == cmd)*/
			
			if (stat(cmd, &st) == 0)
				printf("file*******: %s\n", mdir->d_name);
			printf("CMD: %s\n", cmd);
		}
		i++;
	}

	printf("count: %d HOME: %s strstr[i]: %s\n", count, HOME, strstr[3]);

	if (stat("/bin/ls", &st) == 0)
	{
		printf("Found\n");
	}
	else
	{
		printf("Not found\n");
	}
	return (0);
}
