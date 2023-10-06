/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:46:05 by htong             #+#    #+#             */
/*   Updated: 2023/07/16 22:06:56 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(int nb, char *base)
{
	write(1, &base[nb], 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	sizebase;
	int	i;
	int	j;

	sizebase = ft_strlen(base);
	i = 0;
	j = i + 1;
	if (sizebase == 0 || sizebase == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			sizebase;
	int			ok_base;
	long int	nb;

	ok_base = ft_checkbase(base);
	if (!ok_base)
		return ;
	sizebase = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= sizebase)
	{
		ft_putnbr_base(nb / sizebase, base);
		ft_putchar(nb % sizebase, base);
	}
	if (nb >= 0 && nb <= sizebase - 1)
		ft_putchar(nb % sizebase, base);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
