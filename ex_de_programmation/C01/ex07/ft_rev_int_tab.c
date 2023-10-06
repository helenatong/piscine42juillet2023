/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:54:15 by htong             #+#    #+#             */
/*   Updated: 2023/06/30 21:39:02 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	fin;

	i = 0;
	fin = size - 1;
	while (i < (size / 2))
	{
		ft_swap(tab + i, tab + fin);
		i++;
		fin--;
	}	
}
