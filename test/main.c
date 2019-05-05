#include "holberton.h"

int main(void)
{
	char *sent = {"i am a string"};

	strtok(sent, " ");
	while (*sent != '\0')
	{
		strtok(NULL, " ");
	}
	return (0);
}
