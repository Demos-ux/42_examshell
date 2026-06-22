void rstr_capitalizer(char *str)
{
    int i = 0;
    char c;

    while (str[i])
    {
        c = str[i]; // Den aktuellen Buchstaben zwischenspeichern

        // Prüfen, ob wir auf einem Buchstaben stehen UND das NÄCHSTE Zeichen ein Trenner (oder das Ende) ist
        if ((str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') && 
            (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
        {
            // Es ist der letzte Buchstabe! Wenn er klein ist -> groß machen
            if (c >= 'a' && c <= 'z')
                c -= 32;
        }
        else
        {
            // Es ist NICHT der letzte Buchstabe. Wenn er groß ist -> klein machen
            if (c >= 'A' && c <= 'Z')
                c += 32;
        }
        
        write(1, &c, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;

    // Wenn keine Argumente da sind, einfach nur einen Zeilenumbruch drucken
    if (ac == 1)
        write(1, "\n", 1);
        
    else
    {
        // Schleife durch alle übergebenen Argumente
        while (i < ac)
        {
            rstr_capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}