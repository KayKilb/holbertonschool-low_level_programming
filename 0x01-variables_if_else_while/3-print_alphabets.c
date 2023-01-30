#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Entry point for capital and lowercase letters
 *
 * Return: Always 0
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
