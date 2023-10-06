/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:14:14 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 12:36:14 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while ((tab[i]) && (ok == 0))
	{
		if (f(tab[i]) != 0)
			ok = 1;
		i++;
	}
	return (ok);
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
    out = ft_any(av + 1, &ft_int);
    printf("%d\n", out);
}
*/
