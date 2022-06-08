#include "main.h"
/**
 * jack_bauer - Prints every minutes of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int hour, munite;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '5');
			_putchar((minute % 10) + '9');
			_putchar('\n');
		}
	}
}
