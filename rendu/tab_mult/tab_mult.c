#include <unistd.h>

void ft_putnbr(int nbr)
{
    char c;
    if (nbr >=10)
    {
        ft_putnbr(nbr / 10);
    }
    c = (nbr % 10) + '0';
    write(1,&c,1);
}

void    tab_mult(char *n)
{
    int i = 0;
    int nbr = 0;
    while(n[i])
    {
        nbr = (nbr *10) + n[i] - '0';
        i++;
    }
    i = 1;
    while(i <=9)
    {
        int res = i * nbr;
        ft_putnbr(i);
        write(1," x ",3);
        ft_putnbr(nbr);
        write(1," = ",3);
        ft_putnbr(res);
        write(1,"\n",1);
        i++;
    }
}

int main(int ac, char   **av)
{
    if(ac ==2)
    {
        tab_mult(av[1]);
    }
    else
        write(1,"\n",1);
    return(0);
}