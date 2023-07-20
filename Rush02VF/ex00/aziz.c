/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aziz.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:06:17 by mlakhdha          #+#    #+#             */
/*   Updated: 2023/07/16 19:46:22 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include "print.h"
#include "strs.h"
#include "aziz.h"
#include "array.h"
#include "dictionary.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] && s1[i])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	ft_keyexist(char *key, char pathname[])
{
	char	buffer[256];
	char	**keyvalue;
	int		fd;

	fd = open(pathname, O_RDONLY);
	while (ft_readline(fd, buffer, sizeof(buffer)) > 0)
	{
		keyvalue = ft_split(buffer);
		if (ft_strcmp(keyvalue[0], key) == 0)
		{
			ft_putstr(ft_trim(keyvalue[1]));
			free(keyvalue);
			return (1);
		}
		free(keyvalue);
	}
	close(fd);
	return (0);
}

/*void	ft_add(char *key, char *c)
{
	int		i;
	int		j;
	int		fd;

	fd = open("number.dict", O_RDWR | O_APPEND, 0644);
	i = 0;
	j = 0;
	if (fd == -1)
		ft_putstr("Dict Error\n");
	else
	{
		while (key[i])
		{
			write(fd, &key[i], 1);
			i++;
		}
		while (c[j])
		{
			write(fd, &c[j], 1);
			j++;
		}
	}
	close(fd);
}*/
/*
int main()
{
	ft_add("10", "pip");
	KeyExist("2");
	return 0;

}*/
