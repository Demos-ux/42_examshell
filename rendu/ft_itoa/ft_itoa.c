int     ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sum = 0;
    while(str[i] >= 9 && str[i] <= 13 || str[i] == ' ' )
        i++;
    int sign = 1;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    char    *digits = "0123456789abcdef";
    int k = 0;
    while (str[i])
    {
        char c = str[i];
        k = 0;
        if(str[i] >= 'A' && str[i] <= 'Z')
            c = str[i] + 32;
        while(digits[k] != c && k < str_base)
        {
            k++;
        }
        if (k == str_base)
            break;
        sum=(sum * str_base) + k;
        i++;
    }
    return(sum*sign);
}