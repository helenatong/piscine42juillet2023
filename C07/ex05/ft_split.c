/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:35:45 by htong             #+#    #+#             */
/*   Updated: 2023/07/15 19:55:19 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_string(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_in_charset(str[i], charset))
		{
			count++;
			while (str[i] && !is_in_charset(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_count_char(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !is_in_charset(str[len], charset))
		len++;
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**list_str;
	int		i;
	int		j;
	int		l;
	int		words;

	words = ft_count_string(str, charset);
	list_str = malloc((words + 1) * sizeof(char *));
	i = 0;
	while (i < words)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		l = ft_count_char(str, charset);
		list_str[i] = malloc((l + 1) * sizeof(char));
		j = 0;
		while (j < l)
			list_str[i][j++] = *str++;
		list_str[i][j] = 0;
		i++;
	}
	list_str[i] = 0;
	return (list_str);
}
/*
int	main(int ac, char **av)
{
	char	**t;
	int		i;
	int		lenstrs;

	(void)ac;
	t = ft_split(av[1], av[2]);
	i = 0;
	lenstrs = ft_count_string(av[1], av[2]);
	printf("nb of strings : %d \n", lenstrs);
	while (i < lenstrs + 1)
		printf("%s \n", t[i++]);
	return (0);
}
*/
/*
int	main(int ac, char **av)
{
	(void)ac;
	char **t = ft_split(av[1], av[2]);
	int i = 0;
	while (av[i])
		printf("%s \n", t[i++]);
	return (0);
}*/