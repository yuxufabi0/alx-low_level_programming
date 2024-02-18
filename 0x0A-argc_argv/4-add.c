#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that adds all the its args
  * @argc: an int for arg count
  * @argv: a char pointer to an array of pointers
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc <= 1)
		printf("0\n");
	else
	{
		int i;
		int sum;

		i = 1;
		sum = 0;
		while (i < argc)
		{
			if (!atol(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
