/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:07:29 by htong             #+#    #+#             */
/*   Updated: 2023/07/15 21:07:35 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_lenght_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_tot(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len_tot;
	int	len_sep;

	i = 0;
	len_tot = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len_tot += j;
		i++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	len_sep = i;
	len_tot += (size - 1) * len_sep;
	return (len_tot);
}

void	ft_strcat(char *dest, char *src)
{
	int	lenghtdest;
	int	i;

	lenghtdest = ft_lenght_string(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[lenghtdest + i] = src[i];
		i++;
	}
	dest[lenghtdest + i] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len_tot;
	char	*ptr;

	if (size == 0)
	{
		ptr = malloc(1 * sizeof(ptr));
		ptr[0] = 0;
		return (ptr);
	}
	i = 0;
	len_tot = ft_len_tot(size, strs, sep);
	ptr = malloc((len_tot + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (0);
	*ptr = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i != size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
/*
int	main(int ac, char **av)
{
	char	*s;

	(void)ac;
	s = ft_strjoin(ac - 2, av + 2, av[1]);
	printf("%s", s);
	return (0);
}
*/
// int	main(int ac, char **av)
// {
// 	char	*s;

// 	(void)ac;
// 	s = ft_strjoin(10, av + 1, av[1]);
// 	free(s);
// 	return (0);
// }
