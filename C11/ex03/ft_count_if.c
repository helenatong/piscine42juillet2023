/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:36:42 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 12:41:20 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			compteur++;
		i++;
	}
	return (compteur);
}
/*
int    ft_int(char *str)
{
    if (str[0] == '0')
        return (0);
    return (456);
}

#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;

    int out;
    out = ft_count_if(av + 1, ac - 1, &ft_int);
    printf("%d\n", out);
}
*/
