#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#endif
