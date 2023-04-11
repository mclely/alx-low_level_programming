#include "main.h"

/**
 * append_text_to_file - At the end of a file, text is apended.
 * @filename: The name of the file's pointer.
 * @text_content: At the end of the file, the string to be added.
 *
 * Return: If the function fails - -1.
 *         The user lacks write permissions if the file does not exist - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
