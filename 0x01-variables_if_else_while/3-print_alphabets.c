#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Will print lower then upper case alphabet
 *
 * Return: always 0
 */

int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
