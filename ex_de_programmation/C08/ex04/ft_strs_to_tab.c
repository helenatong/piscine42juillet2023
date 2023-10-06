/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:38:33 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 09:36:03 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_str_copy_malloc(char *str)
{
	int		i;
	int		len;
	char	*tab_copy;

	i = 0;
	len = ft_strlen(str);
	tab_copy = malloc((len + 1) * sizeof(char));
	if (tab_copy == 0)
		return (0);
	while (str[i])
	{
		tab_copy[i] = str[i];
		i++;
	}
	tab_copy[i] = str[i];
	return (tab_copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t_i;

	i = 0;
	if (ac < 1)
		ac = 0;
	t_i = malloc((ac + 1) * sizeof(t_stock_str));
	if (t_i == 0)
		return (0);
	while (i < ac)
	{
		t_i[i].size = ft_strlen(av[i]);
		t_i[i].str = av[i];
		t_i[i].copy = ft_str_copy_malloc(av[i]);
		i++;
	}
	t_i[i].str = 0;
	return (t_i);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
    int i = 0;

    t_stock_str *t_i;
    t_i = ft_strs_to_tab(atoi(av[1]), av + 2);
    while (i < atoi(av[1]))
    {
        printf("%d\n", t_i[i].size);
        printf("%s\n", t_i[i].str);
        printf("%s\n", t_i[i].copy);
        i++;
    }
	
	printf("%p\n", t_i[i].str);
    return (0);
}*/