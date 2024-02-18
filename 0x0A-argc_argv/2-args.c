#include <stdio.h>

/**
  * main - A program that prints all the args it receives
  * @argc: an int for arg counter
  * @argv: a char pointer to arrays of pointers
  */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
