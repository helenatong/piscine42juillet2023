/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:03:40 by htong             #+#    #+#             */
/*   Updated: 2023/06/29 21:08:24 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_condition(char a, char b, char c)
{
	if ((c > b) && (b > a))
	{
		if (!((a == '7') && (b == '8') && (c == '9')))
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, &c, 1);
			write (1, ", ", 2);
		}
		else
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, &c, 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_condition(a, b, c);
				c += 1;
			}
			c = '2';
			b += 1;
		}
		b = '1';
		a += 1;
	}
}
