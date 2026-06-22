#include <unistd.h>

void ft_print_hex(int n)
{
    char c;

    if (n >= 16)
        ft_print_hex(n / 16);
    if(n % 16 < 10)
        c = (n % 16) + '0';
    else
        c = (n % 16) + 'a' - 10;
    write(1, &c, 1);
}

int ft_atoi(char    *c)
{
    int result = 0;
    while(*c >= '0' && *c <= '9')
    {
        result= (result * 10) + (*c - '0');
        c++;
    }
    return(result);
}

int main(int ac, char   **av)
{
    if(ac ==2)
    {
        ft_print_hex(ft_atoi(av[1]));  
    }
    write(1,"\n",1);
    return(0);
}