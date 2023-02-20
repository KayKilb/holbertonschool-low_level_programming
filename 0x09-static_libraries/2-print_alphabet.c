#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - We will write the alphabet out followed by a new line
 *
 *Return: always 0
 */

int main(void)
{
char z = 'a';
while (z <= 'z')
{
putchar(z);
z++;
}
putchar('\n');

return (0);
}
