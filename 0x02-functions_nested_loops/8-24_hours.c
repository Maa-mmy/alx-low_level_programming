#include "main.h"
/**
 * Jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 - 23:59
 */
void  jack_bauer(void)
{
	int h, s;

	h = 0;

	while (h < 24)
	{
		s = 0;
		while (s < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
