#include "main.h"
int main(int argc, char **argv)
{
	char *elf_file, *buf;
	int fd;

	buf = malloc(1024 * sizeof(char));

	if(argc != 2)
	{
		return (0);
	}

	elf_file = argv[1];

	fd = open(elf_file, O_RDONLY);
	lseek(fd, 64, SEEK_SET);
	read(fd, buf, 1024);

	printf("%s\n", buf);
	return (1);
}
