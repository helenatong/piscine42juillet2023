/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:42:01 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 15:42:29 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_which_order(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	order;

	i = 0;
	order = 0;
	while ((i + 1 < length) && (order == 0))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			order = 1;
		if (f(tab[i], tab[i + 1]) < 0)
			order = -1;
		i++;
	}
	return (order);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	order;

	i = 0;
	if ((length == 0) || (length == 1))
		return (1);
	order = ft_which_order(tab, length, *f);
	if (order == 0)
		return (1);
	while (i + 1 < length)
	{
		if ((f(tab[i], tab[i + 1]) >= 0) && (order == 1))
			i++;
		else if ((f(tab[i], tab[i + 1]) <= 0) && (order == -1))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int   ft_int(int n1, int n2)
{
    return (n1 - n2);
}

#include <stdio.h>
int	main(int ac, char **av)
{
    (void)ac;
    (void)av;
    int tab[] = {8, 25, -4, 8} ;
    int out;

    out = ft_is_sort(tab, 2, &ft_int);
    printf("%d\n", out);
}
*/
