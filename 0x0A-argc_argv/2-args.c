#include <stdio.h>

/**
  * main - A program that prints all the args it receives
  * @argc: an int for arg counter
  * @argv: a char pointer to arrays of pointers
  */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}

	return (0);
}
