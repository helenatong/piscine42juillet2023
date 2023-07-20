/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:46:15 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 14:57:16 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "array.h"
#include "strs.h"

char	**ft_split(char line[])
{
	int		i;
	int		j;
	char	**arr_str;

	i = 0;
	j = 0;
	arr_str = malloc(sizeof(char *) * 2);
	if (arr_str != NULL)
	{
		ft_separate_keyvalue(line, &i, &j);
		arr_str[0] = malloc(sizeof(char) * i);
		arr_str[1] = malloc(sizeof(char) * (j - (i + 1) + 1));
		ft_strcpy_delim(arr_str[0], line, 0, i - 1);
		ft_strcpy_delim(arr_str[1], line, i + 1, j);
	}
	return (arr_str);
}

void	ft_separate_keyvalue(char line[], int *i, int *j)
{
	while (line[*i])
	{
		if (line[*i] == ':')
		{
			*j = *i + 1;
			while (line[*j])
				++(*j);
			break ;
		}
		++(*i);
	}
}
