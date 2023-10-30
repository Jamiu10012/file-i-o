#include "main.h"


/**
 * append_text_to_file - Appends to end of file.
 * @filename:name file.
 * @text_content: content of the file.
 * by jamiu
 *
 * Return: If  fails or filename = NULL return -1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int op, wri, mle = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (mle = 0; text_content[mle];)
			mle++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wri = write(op, text_content, mle);

	if (op == -1 || wri == -1)
		return (-1);

	close(op);

	return (1);
}
