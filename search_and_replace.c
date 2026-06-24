#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        char *str = av[1];
        
        char old = *av[2];
        char new = *av[3];
        int i = 0;
        while(str[i])
        {
            char c = str[i];
            if(c == old )
                c = new;
            write(1,&c,1);
            i++;
        }
    }
    write(1,"\n",1);
}
