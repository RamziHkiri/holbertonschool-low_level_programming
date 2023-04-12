#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include"main.h"
#include<stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/**
 * read_textfile -read the content of a text file
 * @filename:the file to read
 * @letters:number of letters it should read and print
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o < 0 || r < 0 || w < 0 || w != r)
	{
	free(buff);
	return (0);
	}
	close(r);
	return (w);
}
