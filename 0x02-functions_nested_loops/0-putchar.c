#include "main.h"
/**
 * main - print _putchar
 * is written by fatima
 * Return: 0
 */

int main(void)
{
char pull[] = "_putchar";
int i = 0;

while (pull[i] != '\0')
{
_putchar(pull[i]);
i++;
}

_putchar('\n');
return (0);
}
