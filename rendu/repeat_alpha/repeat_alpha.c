#include <unistd.h>

int main(int ac, char   **av)
{
    if(ac == 2)
    {
        char    *str = av[1];
        int i = 0;
        int count;
        while(str[i])
        {
            char c = str[i];
            count = 0;
            if(c >= 'a' && c <= 'z')
                count = c - 96; 
            else if(c >= 'A' && c <= 'Z')
                count = c - 64;
            else
                count = 1;
            while(count != 0)
            {
                write(1,&c,1);
                count--;
            }
            i++;
        }
    }
    write(1,"\n",1);
}