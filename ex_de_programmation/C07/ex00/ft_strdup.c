/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:36:54 by htong             #+#    #+#             */
/*   Updated: 2023/07/13 19:44:43 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;

	len = ft_str_len(src);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	ft_strcpy(ptr, src);
	return (ptr);
}
/*
int	main(int ac, char **av) // COmment saturer une me;oire
{
	if (ac != 2)
		return (0);
	printf("%s", ft_strdup(av[1]));
	return (0);
}*/