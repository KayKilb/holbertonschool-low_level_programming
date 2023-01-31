#include "main.h"
#include <stdio.h>

/**
 * main - writing putchar
 *
 * Return: always 0
 */

int main(void)
{
char mput[] = "_putchar";

int i;

for (i = 0; mput[i]; i++)
{
_putchar(mput[i]);
}
_putchar('\n');
return (0);
}
