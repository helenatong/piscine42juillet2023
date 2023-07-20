/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:29:30 by htong             #+#    #+#             */
/*   Updated: 2023/07/13 19:50:39 by htong            ###   ########.fr       */
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

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len_tab;

	if (min >= max)
		return (0);
	len_tab = max - min;
	ptr = malloc(len_tab * sizeof(*ptr));
	if (ptr == NULL)
		return (ptr);
	ft_int_str_copy(ptr, min, max);
	return (ptr);
}
/*
int	main(int ac, char **av)
{
	int	*ptr;
	int	i;
	int	len;

	i = 0;
	ptr = ft_range(atoi(av[1]), atoi(av[2]));
	if (ac != 3)
		return (0);
	while (i < 5)
	{
		printf("%d", ptr[i]);
		i++;
	}
	return (0);
}*/
