/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:35:53 by htong             #+#    #+#             */
/*   Updated: 2023/07/08 21:46:37 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_compare_string(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
	i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		diff;
	char	*swap;

	i = 1;
	while (i + 2 <= argc)
	{
		diff = ft_compare_string(argv[i], argv[i + 1]);
		if (diff > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i != argc)
	{
		ft_print_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
