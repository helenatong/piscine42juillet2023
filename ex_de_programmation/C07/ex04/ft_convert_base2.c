/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:01:53 by htong             #+#    #+#             */
/*   Updated: 2023/07/15 19:56:21 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_minus_n_change_index(char *str, int *j)
{
	int	i;
	int	sign;

	i = *j;
	sign = 1;
	while ((str[i]) && ((str[i] == '-') || (str[i] == '+')))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	*j = i;
	return (sign);
}

int	ft_belong_to_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base_from)
{
	long int	res;
	int			i;
	int			position;
	long int	sign;
	int			sizebase;

	res = 0;
	i = 0;
	sizebase = ft_strlen(base_from);
	while ((str[i]) && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	sign = ft_count_minus_n_change_index(str, &i);
	while (ft_belong_to_base(str[i], base_from) && str[i])
	{
		position = 0;
		while (str[i] != base_from[position])
			position++;
		res = res * sizebase + position;
		i++;
	}
	return (sign * res);
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
		if ((base[i] == '-') || (base[i] == '+') || (base[i] >= 9
				&& base[i] <= 13) || (base[i] == 32))
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
