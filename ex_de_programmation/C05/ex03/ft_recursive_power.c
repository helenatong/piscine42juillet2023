/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:47:33 by htong             #+#    #+#             */
/*   Updated: 2023/07/09 14:43:09 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (((nb == 0) && (power == 0)) || (power == 0))
		return (1);
	if (power >= 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*
int main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%d",ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
    return (0);
}
*/