/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycoste <ycoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:29:45 by ycoste            #+#    #+#             */
/*   Updated: 2023/07/02 15:38:46 by ycoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) || (i == x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
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
			ft_putchar('|');
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
		if ((i == 0) || (i == x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
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
