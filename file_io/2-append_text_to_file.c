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
 *  append_text_to_file - append text to the end of the file
 *  @filename: pointer to the file name
 *  @text_content: string to add to the file
 *  Return:if function fails -1 else return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, o;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0 ; text_content[i] ; i++)
			;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);
	if (o < 0 || w < 0)
		return (-1);
	close(o);

	return (1);
}
