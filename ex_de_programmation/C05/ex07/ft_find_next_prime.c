/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:47:10 by htong             #+#    #+#             */
/*   Updated: 2023/07/12 14:10:34 by htong            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	i = 0;
	is_prime = 0;
	while (!is_prime)
	{
		is_prime = ft_is_prime(nb + i);
		i++;
	}
	return (nb + i - 1);
}
/*
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d",ft_find_next_prime(atoi(argv[1])));
    return (0);
}
*/