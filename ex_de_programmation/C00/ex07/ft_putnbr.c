/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:02:18 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 10:12:00 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if ((nb >= -2147483647) && (nb < 0))
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb >= 0 && nb <= 9)
	{
		nb = nb % 10 + '0';
		ft_putchar(nb);
	}
}

/*
int	main(int ac, char **av)
{
	ft_putnbr(atoi(av[1]));
	return (0);
}*/
