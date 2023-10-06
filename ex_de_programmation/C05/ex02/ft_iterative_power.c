/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:32:28 by htong             #+#    #+#             */
/*   Updated: 2023/07/08 22:47:04 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (power < 0)
		return (0);
	if ((nb == 0) && (power == 0))
		return (1);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*
int main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    printf("%d",ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
    return (0);
}
*/
