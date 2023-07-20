/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:15:47 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 15:16:44 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_put_nb(int nb)
{
	if (nb >= 10)
	{
		ft_put_nb(nb / 10);
		ft_putchar (nb % 10 + '0');
	}
	if (nb <= 9)
		ft_putchar (nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_print_str(par[i].str);
		write (1, "\n", 1);
		ft_put_nb(par[i].size);
		write (1, "\n", 1);
		ft_print_str(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 0;
    t_stock_str *t_i;
    t_i = ft_strs_to_tab(atoi(av[1]), av + 2);
    
    return (0);
}*/