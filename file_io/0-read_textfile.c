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
	ssize_t len;
	char *buff;
	int r;

	if (filename == NULL)
		return (0);
	r = open(filename, O_RDONLY);
	if (r)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(r);
		return (0);
	}
	len = read(r, buff, letters);
	len = write(STDOUT_FILENO, buff, len);
	if (len < 0)
	{
	free(buff);
	return (0);
	}
	close(r);
	return (len);
}
