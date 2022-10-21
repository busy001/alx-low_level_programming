#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to student
 * @c the character to print
 * Return: on scuccess 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
