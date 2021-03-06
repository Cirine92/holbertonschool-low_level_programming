#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *read_textfile - function
 *@filename: char
 *@letters: size
 *Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *txt;
	int nb, n;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	txt = malloc(letters);
	if (!txt)
		return (0);

	n = read(fd, txt, letters);

	nb = write(STDOUT_FILENO, txt, n);
	if (nb == -1)
		return (0);
	free(txt);
	close(fd);

return (nb);
}
