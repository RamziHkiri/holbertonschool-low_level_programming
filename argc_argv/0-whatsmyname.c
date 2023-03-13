#include <stdlib.h>
#include <stdio.h>
/**
 * main - name of the executable file
 * @argc: size of argv
 * @argv:array containe the element of the commande line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
