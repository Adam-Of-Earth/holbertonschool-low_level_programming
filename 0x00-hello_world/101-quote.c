#include <unistd.h>

/**
 * main - entry point
 *
 * return: 1
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";

	write(2, text, sizeof(text) - 1);
	return (1);
}
