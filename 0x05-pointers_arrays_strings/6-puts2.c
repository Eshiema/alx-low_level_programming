#include "main.h"
/**
 * puts2 - print every other character of a string,
 * starting with the first character
 * @str: string to  input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *c = str;
	int m;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	i = longi - 1;
	for (m = 0 ; m <= i ; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}
