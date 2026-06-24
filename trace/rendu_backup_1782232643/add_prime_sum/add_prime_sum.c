#include <unistd.h>

int is_prime(int num)
{
    int divider = 2;
    if (num <= 1)
        return(0);
    while(divider < num)
    {
        if(num % divider == 0)
        {
            return (0);
        }
        divider++;
    }
    return(1);
}

int ft_atoi(char   *str)
{
    int i = 0;
    int negativ = 1;
    int sum = 0;
    if(str[i] == '-' || str[i] == '+')
    {
        i++;
        if(str[i] == '-')
            negativ = -1;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
            sum = (sum * 10) + str[i] - '0';
            i++;
    }
    return(sum * negativ);
}   

void    ft_putnbr(int i)
{
    char c;
    if(i >= 10)
    {
        ft_putnbr(i / 10);
    }
    c = (i % 10) + '0';
    write(1,&c,1);
}

int main(int ac, char   **av)
{
    int i = 2;
    int nbr = 0;
    int sum = 0;
    if(ac ==2)
    {
        nbr = ft_atoi(av[1]);
        if(nbr > 0)
        {
            while(i <= nbr)
            {
                if(is_prime(i))
                    sum += i;
                i++;
            }
            ft_putnbr(sum);
        }
        else
            write(1,"0",1);
    }
    else
    {
        write(1,"0",1);
    }
    write(1,"\n",1);
    return(0);
}