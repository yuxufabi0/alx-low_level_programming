#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that multiplies two numbers
  * @argc: an int for arg count
  * @argv: a char pointer to an array of pointers
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}

	return (0);
}
