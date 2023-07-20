/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:53:29 by htong             #+#    #+#             */
/*   Updated: 2023/07/13 10:15:05 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_str_len(char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        i++;
    }
    return (i);
}

int checkbase (char *base)
{
    int len;
    int i;
    int j;

    i = 0;
    len = ft_str_len(base);
    if (len == 0 || len == 1)
        return (0);
    
    while (base[i])
    {
        if ((base[i] == '-') || (base[i] == '+'))
            return(0);
        
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int len_base;
    long int nb;
    
    if (!checkbase(base))
        return;
    len_base = ft_str_len(base);
    nb = nbr;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= len_base)
    {
        ft_putnbr_base(nb / len_base, base);
        ft_putchar(base[nb % len_base]);
    }
    if (nb < len_base)
    {
        ft_putchar(base[nb % len_base]);
    }
}



int main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    ft_putnbr_base(atoi(av[1]), av[2]);
    return (0);
}