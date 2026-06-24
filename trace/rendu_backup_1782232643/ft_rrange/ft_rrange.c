#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int range = 0;
    int *res;
    int i = 0;
    if(end > start)
        range = end - start + 1;
    else
        range = start - end + 1;
    res = malloc(range * sizeof(int));
    if(res == NULL)
        return(NULL);
    while(i < range)
    {
        res[i] = end;
        if(start > end)
            end++;
        else
            end--;
        i++;
    }
    return(res);
}