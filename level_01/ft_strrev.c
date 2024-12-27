#include <stdio.h>

int ft_len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_len(str);
    if (!str)
            return (NULL);
    char buff;
    while (i < len - 1)
    {
        buff = str[i];
        str[i] = str[len - 1];
        str[len - 1] = buff;
        i++;
        len--;
    }
    return (str);
}

int main(int ac, char **av)
{
    printf("%s\n", ft_strrev(av[1]));
}
