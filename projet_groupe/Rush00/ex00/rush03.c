/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlecourt <qlecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:29:45 by ycoste            #+#    #+#             */
/*   Updated: 2023/07/02 17:11:51 by qlecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	i++;
	}
	ft_putchar('\n');
}

void	ft_print_side(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) || (i == x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	i++;
	}
	ft_putchar('\n');
}

void	ft_print_bot(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	i++;
	}
}

void	rush(int x, int y)
{
	int	decompte;

	decompte = y;
	while (decompte != 0)
	{
		if (decompte == y)
			ft_print_top(x);
		else if (decompte == 1)
			ft_print_bot(x);
		else
			ft_print_side(x);
		decompte--;
	}
}
