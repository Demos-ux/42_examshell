void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int temp;
    int swapped = 1;
    while(swapped == 1)
    {
        swapped = 0;
        i = 0;
        while(i < size-1)
        {
            if(tab[i] > tab[i+1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                swapped = 1;
            }
            i++;
        }
    }
}
