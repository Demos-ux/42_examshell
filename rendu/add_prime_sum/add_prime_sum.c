#include <unistd.h>

int ft_atoi(char    *str)
{
    int i = 0;
    int sum = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            return(0);
        i++;
    }
    char    *digits = "0123456789";
    while(str[i])
    {
        char c = str[i];
        int k = 0;
        while(k < 10 && digits[k] != c)
            k++;
        if(k == 10)
            break;
        sum = (sum * 10) + k;
        i++;
    }
    return(sum);
}

int is_prime(int nbr)
{
    int divider = 2;
    if(nbr < divider)
        return(0);
    while(divider < nbr)
    {
        if(nbr % divider == 0)
            return(0);
        divider++;
    }
    return(1);
}

void    ft_putnbr(int nbr)
{
    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    char c = nbr % 10 + '0';    
    write(1,&c,1);
}

int main(int ac, char   **av)
{
    if(ac == 2)
    {
        int sum = 0;
        int prime = 2;
        int nbr = ft_atoi(av[1]);
        while (prime <= nbr)
        {
            if(is_prime(prime))
                sum += prime;
            prime++;
        }
        ft_putnbr(sum);
            
    }
    else
        write(1,"0",1);
    write(1,"\n",1);
}