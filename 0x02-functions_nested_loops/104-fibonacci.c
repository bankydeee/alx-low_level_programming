#include <stdio.h>
/**
* main - main functions
* Return: 0
*/
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long sum;
	unsigned long fib3;

	printf("%lu, %lu", fib1, fib2);

	for (int count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		printf(", %lu", fib3);

		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");
	return (0);
}
