/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:42:03 by htong             #+#    #+#             */
/*   Updated: 2023/07/13 20:00:52 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_int_str_copy(int *int_dest, int min, int max)
{
	int	i;

	i = 0;
	while (min + i < max)
	{
		int_dest[i] = min + i;
		i++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len_tab;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	len_tab = max - min;
	*range = malloc(len_tab * sizeof(int));
	if (*range == 0)
		return (-1);
	ft_int_str_copy(*range, min, max);
	return (len_tab);
}
/*
int	main(int ac, char **av)
{
	int	len;
	int	*range;

	if (ac != 3)
		return (0);
	printf("%d", ft_ultimate_range(&range, atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
/*
void	ft_int_str_copy(int *int_dest, int min, int max)
{
	int	i;

	i = 0;
	while (min + i < max)
	{
		int_dest[i] = min + i;
		i++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len_tab;

	if (min >= max)
	{
		range = 0;
		return (0);//ok
	}
	len_tab = max - min;
	range = malloc(len_tab * sizeof(int)); //siweof
	ft_int_str_copy(*range, min, max);
	return (len_tab);
}
*/
/* Bonne version
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len_tab;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	len_tab = max - min;
	range = malloc(sizeof(int *));
	*range = malloc(len_tab * sizeof(int));
	ft_int_str_copy(*range, min, max);
	if ((range == 0) || (*range == 0))
		return (-1);
	return (len_tab);
}
*/
