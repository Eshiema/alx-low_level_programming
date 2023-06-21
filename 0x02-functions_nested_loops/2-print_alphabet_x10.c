#include "main.h"

/**
 *print_alphabet_x10 - Prints x10 the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char letter;
int t;
t = 0;
while (t < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
t++;
}
