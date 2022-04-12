#include "main.h"

/**
 * Description - Prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
char main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
