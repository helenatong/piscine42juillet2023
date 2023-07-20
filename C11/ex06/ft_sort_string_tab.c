/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:28:08 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 18:02:12 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (tab[i])
	{
		min = i;
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				min = j;
			j++;
		}
		ft_swap(&tab[i], &tab[min]);
		i++;
	}
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
    (void)ac;
    //char **tab;
    ft_sort_string_tab(av + 1);
    printf("%s\n%s\n%s\n", av[1], av[2], av[3]);
}*/
