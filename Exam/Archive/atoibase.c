/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:31:09 by htong             #+#    #+#             */
/*   Updated: 2023/07/13 11:17:09 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ok_char_in_base(char c, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (c == base[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_lenstr(char *base)
{
    int i;
    
    i = 0;
    while (base[i])
        i++;
    return (i);

}

int check_base_ok(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (base[i])
    {
        if (base[i] == 32 
            || (base[i] >= 9 && base[i] <= 13)
            || base[i] == '-'
            || base[i] == '+')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    if ((i == 0) || (i == 1))
        return (0);
    return (1);
}

int ft_atoi_base(char *str, char *base)
{
    int i;
    int len_base;
    int indice;
    int res;
    int sign;

    if (!check_base_ok(base))
        return (0);
    i = 0;
    res = 0;
    sign = 1;
    len_base = ft_lenstr(base);

    while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
        i++;
    while (str[i] == '-' || (str[i] == '+'))
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] && ft_ok_char_in_base(str[i], base))
    {
        indice = 0;
        while (base[indice] != str[i])
            indice++;
        res = res * len_base + indice;
        i++;
    }
    return (res);
}

#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%d", ft_atoi_base(av[1], av[2]));
    return (0);
}
