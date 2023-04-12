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
 * create_file - create a file
 * @filename: string file name
 * @text_content: string of the content to add
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int i, o, w;

if (!filename)
	return (-1);

if (text_content != NULL)
{
	for (i = 0 ; text_content[i] ; i++)
		;
}
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, i);
if (o < 0)
{
	close(o);
	return (-1);
}
close(o);
return (1);
}
