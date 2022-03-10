#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * writing thing to the standard Error based the  oldest OS UNIX built by ginious
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
