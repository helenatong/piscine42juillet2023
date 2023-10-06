/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:35:42 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 20:01:07 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strs.h"

void	ft_reverse(char str[])
{
	int		i;
	int		len;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		++i;
	}
}

int	ft_strlen(char str[])
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

char	*ft_strcpy_delim(char dest[], char src[], int begin, int end)
{
	int	i;

	i = 0;
	while (i + begin <= end)
	{
		dest[i] = src[i + begin];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_trim(char str[])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t')
		++i;
	while (str[i + j])
	{
		str[j] = str[i + j];
		++j;
	}
	while ((str[j - 1] == ' ' || str[j - 1] == '\t')
		&& j - 1 >= 0)
		--j;
	str[j] = '\0';
	return (str);
}
