/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:24:18 by htong             #+#    #+#             */
/*   Updated: 2023/07/10 13:06:33 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb <= 2147483647)
	{
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
		return (res);
	}
	return (res);
}
/*
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d",ft_iterative_factorial(atoi(argv[1])));
    return (0);
}
*/
