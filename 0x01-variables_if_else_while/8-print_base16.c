#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char b;
int c;
b = 'a';
c = 0;
while
(c < 10) {
putchar(c + '0');
c++;
}
while
(b <= 'f') {
putchar(b);
b++;
}
putchar('\n');
return (0);
}

