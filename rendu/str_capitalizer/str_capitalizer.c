#include <unistd.h>

void    ft_str_capitalizer(char *str)
{
    int new_word = 1;
    int i = 0;
    while(str[i])
    {
        if(str[i] == ' ' || str[i] == '\t')
        {    
            new_word = 1;
        }
        else
        {
            if(new_word == 1)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
                new_word = 0;
            }
            else
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;

            }
        }
        write(1,&str[i],1);
        i++;
    }
}

int main(int ac, char   **av)
{
    if(ac == 1)
    { 
        write(1, "\n",1);
    }
    else
    {
        int i = 1;
        while(av[i])
        {
            ft_str_capitalizer(av[i]);
            write(1,"\n",1);
            i++;
        }
    }
}