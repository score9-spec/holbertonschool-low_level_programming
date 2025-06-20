#include "main.h"

/**
* jack_bauer - Imprime toutes les minutes de la journée
*
* Description: Cette fonction imprime toutes les minutes de la journée,
*              de 00:00 à 23:59.
*/
void jack_bauer(void)
{
int heure;
int minute;

for (heure = 0; heure < 24; heure++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((heure / 10) + '0');
_putchar((heure % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
