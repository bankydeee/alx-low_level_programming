#include "main.h"
#include <stdio.h>
/**
 * main - natural numbers below 10
 * Return: void
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}