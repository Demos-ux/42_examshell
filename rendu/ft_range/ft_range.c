#include <stdlib.h>

int *ft_range(int start, int end)
{
    int range =(start < end) & end -start +1: start -end +1;
    int *res = malloc(range*sizeof(int));
    int i = 0;
    while(i < range)
    {
        res[i] = start;
        i++;
        end += (start < end) ? 1:-1;
    }
    return(res);
}