#include <stdio.h>

/**
  * main - A program that prints the numbers of command lind arg taken by main
  * @argc: takes in an int
  * @argv: takes in a char pointer to arrays of pointer
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc);
	}

	return (0);
}
