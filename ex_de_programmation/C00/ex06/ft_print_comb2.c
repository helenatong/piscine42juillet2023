/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:05:28 by htong             #+#    #+#             */
/*   Updated: 2023/06/29 21:08:50 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nb(int A, int B)
{
	int	a1;
	int	a2;
	int	b1;
	int	b2;

	a1 = A / 10;
	a2 = A % 10;
	b1 = B / 10;
	b2 = B % 10;
	ft_putchar(a1 + '0');
	ft_putchar(a2 + '0');
	ft_putchar(' ');
	ft_putchar(b1 + '0');
	ft_putchar(b2 + '0');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (!((n1 == 98) && (n2 == 99)))
			{
				ft_print_nb(n1, n2);
				write(1, ", ", 2);
			}
			else
			{
				ft_print_nb(n1, n2);
			}
			n2++;
		}
		n1++;
	}
}
