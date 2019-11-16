int *ft_make_array(int n)
{
    int i = 0;
    int nb = n;
    int *array

    while (nb / 10 > 0)
    {
        i++;
        nb = nb / 10;
    }
    array[i--] = \0;
    while(i > -1)
    {
        array[i--] = n % 10 + 10;
        n = n / 10;
    }
    return (array);
}
