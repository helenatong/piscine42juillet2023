/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:29:48 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 18:36:08 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void    ft_int(int i)
{
    printf("%d", i+2);
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    int tab[] = {1, 2 , 3};
    ft_foreach(tab, 3, &ft_int);
}*/
