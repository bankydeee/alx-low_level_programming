#include "main.h"
/**
 * _strlen - procedure title
 * @s: input
 * Return: string size
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);
}
