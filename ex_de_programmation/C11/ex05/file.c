/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:08:34 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 16:11:53 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_change_index_until_no_isspace(char *str, int *index);
int		ft_count_minus_n_change_index(char *str, int *j);
int		ft_atoi(char *str);

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

int	is_operator(char *op, char *str)
{
	int	i;

	i = 0;
	if (op[0] == '\0')
		return (0);
	if (op[1] != '\0')
		return (0);
	while (str[i])
	{
		if (op[0] == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_do_op_0(int n1, char op, int n2)
{
	if (op == '+')
		ft_putnbr(n1 + n2);
	else if (op == '-')
		ft_putnbr(n1 - n2);
	else if (op == '*')
		ft_putnbr(n1 * n2);
}

void	ft_do_op(int n1, char *op, int n2)
{
	if (!(is_operator(op, "+-*/\%")))
		write (1, "0", 1);
	else
	{
		if ((op[0] == '*') || (op[0] == '+') || (op[0] == '-'))
			ft_do_op_0(n1, op[0], n2);
		else if (op[0] == '/')
		{
			if (n2 == 0)
			{
				write(1, "Stop : division by zero", 23);
				return ;
			}
			ft_putnbr(n1 / n2);
		}
		else if (op[0] == '%')
		{
			if (n2 == 0)
			{
				write(1, "Stop : modulo by zero", 21);
				return ;
			}
			ft_putnbr(n1 % n2);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	ft_do_op(ft_atoi(av[1]), av[2], ft_atoi(av[3]));
	write (1, "\n", 1);
	return (0);
}
