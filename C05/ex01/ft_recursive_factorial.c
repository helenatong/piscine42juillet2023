/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:57:41 by htong             #+#    #+#             */
/*   Updated: 2023/07/09 15:04:45 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

/*
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d",ft_recursive_factorial(atoi(argv[1])));
    return (0);
}
*/

/*
int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d",ft_recursive_factorial(atoi(argv[1])));
    return (0);
}
*/