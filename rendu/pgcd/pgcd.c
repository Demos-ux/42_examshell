#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int nbr1;
    int nbr2;
    int i;

    if (ac == 3)
    {
        // 1. Strings bequem mit atoi in Integer umwandeln
        nbr1 = atoi(av[1]);
        nbr2 = atoi(av[2]);

        if (nbr1 > 0 && nbr2 > 0) // Strictly positive integers
        {
            // 2. Wir starten beim kleineren Wert (denn der Teiler kann nicht größer sein als die kleinere Zahl)
            i = nbr1;
            if (nbr2 < nbr1)
                i = nbr2;

            // 3. Wir zählen rückwärts, bis wir den größten gemeinsamen Teiler finden
            while (i > 0)
            {
                if (nbr1 % i == 0 && nbr2 % i == 0)
                {
                    printf("%d", i); // printf nutzen, da erlaubt!
                    break;           // Sobald wir ihn haben, brechen wir ab
                }
                i--;
            }
        }
    }
    // Nach den Regeln: Ein Newline muss am Ende IMMER gedruckt werden (printf("\n") ist hier am einfachsten)
    printf("\n");
    return (0);
}