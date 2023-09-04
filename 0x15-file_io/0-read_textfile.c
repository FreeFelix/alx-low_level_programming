#include"main.h"
#include<stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: numbers of letter to be read
 * Return: w- actual number of bytes read and printed
 *      0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
t = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buffer, t);

free(buffer);
close(fd);
return (w);
}
