#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char   **av)
{
    if(ac == 4)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[3]);
        int sum = 0;
        if(*av[2] == '*' || *av[2] == '+' || *av[2] == '-' || *av[2] == '/' || *av[2] == '%')
        {
            if(*av[2] == '*')
                sum =  n1 * n2;
            else if( *av[2] == '+')
                sum = n1 + n2;
            else if ( *av[2] == '-')
                sum = n1 - n2;
            else if (*av[2] == '/')
                sum = n1 / n2;
            else if (*av[2] == '%')
                sum = n1 % n2;
            printf("%d",sum);
        }
    }
    printf("\n");
}