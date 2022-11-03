#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Name of file to create.
 * @text_content: NULL-terminated string to erite in file.
 *
 * Return: 1 on success, -1 on failure or if @filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; *(text_content + len);)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

