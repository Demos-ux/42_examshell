int ft_atoi_base(const char *str, int str_base)
{
    int digit = 0;
    int sum = 0;
    int negativ = 1;
    if(*str == '-')
    {   
        negativ = -1;
        str++;
    }
    while(*str)
    {
        digit = -1;

        if(*str >= '0' && *str <= '9')
            digit = *str -'0';
        if(*str >= 'a' && *str <= 'z')
            digit = *str - 'a' + 10;
        if(*str >= 'A' && *str <= 'Z')
            digit = *str - 'A' + 10;
        if(digit < 0 || digit >= str_base)
            break;
        sum = (sum *  str_base) + digit;
        str++;
    }
    return(sum * negativ);
}