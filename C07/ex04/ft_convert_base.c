/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:01:50 by htong             #+#    #+#             */
/*   Updated: 2023/07/13 20:08:15 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
int		ft_belong_to_base(char c, char *base);
int		ft_atoi_base(char *str, char *base_from);
int		ft_checkbase(char *base);

int	ft_only_len_converted_str(int nbr, char *base_to)
{
	int			sizebase;
	long int	nb;
	int			len;

	sizebase = ft_strlen(base_to);
	nb = nbr;
	len = 0;
	if (nb < 0)
	{
		len += 1;
		nb = -nb;
	}
	while (nb / sizebase != 0)
	{
		len++;
		nb = nb / sizebase;
	}
	return (len + 1);
}

void	ft_sign(long int *nb, int *add_minus)
{
	if (*nb < 0)
	{
		*nb = *nb * (-1);
		*add_minus = 1;
	}
}

char	*ft_nb_in_tab(int nbr, char *base_to, char *dest)
{
	int			sizebase;
	long int	nb;
	int			i;
	int			add_minus;

	i = 0;
	add_minus = 0;
	sizebase = ft_strlen(base_to);
	nb = nbr;
	ft_sign(&nb, &add_minus);
	while (nb / sizebase != 0)
	{
		dest[i] = base_to[nb % sizebase];
		nb = nb / sizebase;
		i++;
	}
	dest[i] = base_to[nb % sizebase];
	if (add_minus)
	{
		dest[i + 1] = '-';
		dest[i + 2] = '\0';
	}
	if (!add_minus)
		dest[i + 1] = '\0';
	return (dest);
}

char	*ft_reverse_tab(char *tab)
{
	int		i;
	int		fin;
	int		len;
	char	swap;

	i = 0;
	len = ft_strlen(tab);
	fin = len - 1;
	while (i < len / 2)
	{
		swap = tab[i];
		tab[i] = tab[fin];
		tab[fin] = swap;
		i++;
		fin--;
	}
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_dec;
	int		len;
	char	*tab;

	if ((!ft_checkbase(base_from)) || (!ft_checkbase(base_to)))
		return (0);
	nb_dec = ft_atoi_base(nbr, base_from);
	len = ft_only_len_converted_str(nb_dec, base_to);
	tab = malloc(sizeof(char) * (len + 1));
	tab = ft_nb_in_tab(nb_dec, base_to, tab);
	tab = ft_reverse_tab(tab);
	return (tab);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base((av[1]), av[2], av[3]));
	return (0);
}*/