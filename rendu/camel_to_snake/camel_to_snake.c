#include <unistd.h>

int main    (int    ac, char    **av)
{
    if(ac == 2)
    {
        int i = 0;
        char    *str = av[1];
        while(str[i])
        {
            char c = str[i];
            if(c >= 'A' && c <= 'Z')
            {
                write(1,"_",1);
                c = str[i] + 32;
            }
            write(1,&c,1);
            i++;
        }
    }
    write(1,"\n",1);
}