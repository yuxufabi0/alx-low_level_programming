#include <stdio.h>

/**
  * main - A program that prints its own name
  * @argc: takes in an int
  * @argv: takes in a char pointer to arrays of pointer
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
