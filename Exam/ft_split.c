/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:22:30 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 16:43:59 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> /*a effacer*/
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

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while ((is_in_charset(str[i], charset)) && (str[i]))
		i++;
	while (str[i])
	{
		while ((!is_in_charset(str[i], charset)) && (str[i]))
			i++;
		while ((is_in_charset(str[i], charset)) && (str[i]))
			i++;
		nb_words++;
	}
	return (nb_words);
}

int	ft_strlen(char *str, int k, char *charset)
{
	int	len;

	len = 0;
	while (str[k] && is_in_charset(str[k], charset))
		k++;
	while (str[k] && !is_in_charset(str[k], charset))
	{
		k++;
		len++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**out;
	int		nb_words;
	int		lenstr;
	int		id;
	int		k_str;
	int		j;

	id = 0;
	k_str = 0;
	nb_words = ft_count_word(str, charset);
	out = malloc(sizeof(char *) * (nb_words + 1));
	if (out == 0)
		return (0);
	while (str[k_str] && is_in_charset(str[k_str], charset))
		k_str++;
	while (nb_words)
	{
		lenstr = ft_strlen(str, k_str, charset);
		out[id] = malloc((lenstr + 1) * sizeof(char));
		if (out[id] == 0)
			return (0);
		j = 0;
		while (j < lenstr)
			out[id][j++] = str[k_str++];
		out[id][j] = '\0';
		while (str[k_str] && is_in_charset(str[k_str], charset))
			k_str++;
		id++;
		nb_words--;
	}
	return (out);
}


int main(int ac, char **av)
{
    (void)ac;
    char **t;
    int i = 0;
	int nb = ft_count_word(av[1], av[2]);
    //(void)av;
    t = ft_split(av[1], av[2]);
    while (i < nb)
    {
        printf("%s\n", t[i]);
        i++;
    }
    return (0);
}