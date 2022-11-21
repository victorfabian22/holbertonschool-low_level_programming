#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: file name
 * @letters:Number of letters is should read and print
 * Return:actual number of letters it could read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, r;
	char *fp;

	fp = malloc(sizeof(char) * letters);
	
	if (fp == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
	   return (0);
	}


	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		free(fp);
		return (0);
	}
	r = read(i, fp, letters);

	fp[letters + 1] = '\0';

	 write(STDOUT_FILENO, fp, r);

	close(i);

	return (r);
}

