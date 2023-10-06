/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:43 by htong             #+#    #+#             */
/*   Updated: 2023/07/12 14:01:03 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	long int	start;
	long int	max;
	long int	i;

	i = 0;
	max = nb;
	start = nb;
	if (nb <= 0)
		return (0);
	while (start * start > nb)
	{
		max = start;
		start = start / 2;
	}
	while (start + i <= max)
	{
		if ((start + i) * (start + i) == nb)
			return (start + i);
		i++;
	}
	return (0);
}

/*
int main(int argc, char **argv) 
//2 147 483 647 -- 2 147 395 600 = 46 341 au carre et c est le max
//Faire attention au long int
{
    if (argc != 2)
        return (0);
    printf(" RESULTAT : %d",ft_sqrt(atoi(argv[1])));
    return (0);
}
*/

/*
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i <= nb) && (i <= 46341))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
*/