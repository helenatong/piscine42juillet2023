/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:42:26 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 12:12:59 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*out;

	out = malloc (length * sizeof(int));
	i = 0;
	if (out == 0)
		return (0);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}

/*
int    ft_int(int i)
{
    //int *out;
    //out = malloc(sizeof(int));
    //out[0] = i + 2;
    //return(out);
    return (i + 2);
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    int tab[] = {1, 2 , 3};
    int *out;
    out = malloc (3 * sizeof(int));
    out = ft_map(tab, 3, &ft_int);
    printf("%d\n%d\n%d\n", out[0], out[1], out[2]);
}*/
