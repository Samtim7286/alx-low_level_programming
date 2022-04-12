#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
int hour, munite;

for (hour = 0; hour = 23; hour++)
{
for (munite = 0; munite = 59; munite++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(' ');
_putchar((munite / 10) + '0');
_putchar((munite % 10) + '0');
_putchar('\n');
}
}
}
