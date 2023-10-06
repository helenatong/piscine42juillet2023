/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:48:25 by htong             #+#    #+#             */
/*   Updated: 2023/07/12 20:31:01 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
		if ((base[i] == '-') || (base[i] == '+')
			|| (base[i] >= 9 && base[i] <= 13) || (base[i] == 32))
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

int	ft_atoi_base(char *str, char *base)
{
	long int	res;
	int			i;
	int			position;
	long int	sign;
	int			sizebase;

	if (!ft_checkbase(base))
		return (0);
	res = 0;
	i = 0;
	sizebase = ft_strlen(base);
	while ((str[i]) && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	sign = ft_count_minus_n_change_index(str, &i);
	while (ft_belong_to_base(str[i], base) && str[i])
	{
		position = 0;
		while (str[i] != base[position])
			position++;
		res = res * sizebase + position;
		i++;
	}
	return (sign * res);
}

/*
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%d", ft_atoi_base(av[1], av[2]));
	return (0);
}
*/