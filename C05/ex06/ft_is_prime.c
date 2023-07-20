/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:30:45 by htong             #+#    #+#             */
/*   Updated: 2023/07/12 14:08:11 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	long int	i;

	i = 2;
	if ((nb == 0) || (nb == 1))
		return (0);
	if (nb < 0)
		return (0);
	while ((i * i <= nb) && (i <= 46341))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_is_prime(atoi(argv[1])));
	return (0);
}
//49939 49943 49957 49991 49993 49999
//2 147 483 647 -- 2 147 395 600 = 46 341 au carre et c est le max
*/
/*
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if ((nb == 0) || (nb == 1))
		return (0);
	if (nb < 0)
		return (0);
	while (i * i <= nb) 
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
*/