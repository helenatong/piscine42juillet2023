/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:13:05 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 15:56:37 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change_index_until_no_isspace(char *str, int *index)
{
	int	i;

	i = 0;
	while ((str[i])
		&& ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	*index += i;
}

int	ft_count_minus_n_change_index(char *str, int *j)
{
	int	i;
	int	sign;

	i = *j;
	sign = 1;
	while ((str[i])
		&& ((str[i] == '-') || (str[i] == '+')))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	*j = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	ft_change_index_until_no_isspace(str, &i);
	sign = ft_count_minus_n_change_index(str, &i);
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
