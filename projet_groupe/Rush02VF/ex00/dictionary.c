/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:13:11 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 19:48:47 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"
#include "numbers.h"
#include "strs.h"

#include <fcntl.h>
#include <unistd.h>

int	ft_is_valid_dictionary(char pathname[])
{
	int		fd;
	int		num_lines;
	char	line[256];
	int		i;

	num_lines = ft_getnumlines(pathname);
	fd = open(pathname, O_RDONLY);
	if (fd == -1)
		return (-1);
	i = 0;
	while (i < num_lines)
	{
		if (ft_readline(fd, line, sizeof(line)) != -1)
		{
			if (!ft_is_valid_line(line, 1))
				return (0);
		}
		else
			return (0);
		++i;
	}
	close(fd);
	return (1);
}

/*
 * Parameter :
 * pathname = the path of the file
 *
 * Return Value :
 * the number of lines or -1 if it fails
 */
int	ft_getnumlines(char pathname[])
{
	int		fd;
	int		count;
	char	c;

	fd = open(pathname, O_RDONLY);
	if (fd == -1)
		return (-1);
	count = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			++count;
	}
	close(fd);
	return (count);
}

/* Parameters :
 * fd = file descriptor
 * buffer = it is where we store the data
 * size = the size of the buffer it can handles
 *
 * Return Value :
 * Number of character the line contains or -1 if the number of character
 * exceeds the size of the buffer
 */
int	ft_readline(int fd, char buffer[], int size)
{
	int		i;
	char	c;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (i >= size - 1)
			return (-1);
		if (c == '\n')
			break ;
		buffer[i] = c;
		++i;
	}
	buffer[i] = '\0';
	return (i);
}

/* Les 2 prochaines fonctions :
 * savoir si l argument indique pour ajouter dans le dico est conforme
 */
int	ft_ok_until_nb(char *str, int *ptr)
{
	int	sign;

	sign = 1;
	while ((str[*ptr] >= 9 && str[*ptr] <= 13) || (str[*ptr] == ' '))
		*ptr += 1;
	while (str[*ptr] == '-' || str[*ptr] == '+')
	{
		if (str[*ptr] == '-')
			sign = -sign;
		*ptr += 1;
	}
	if (sign < 0)
		return (0);
	return (1);
}

/* mod1 = passe par la fonction de Pascal pour check ligne dico
 *  mod 0 : pour check format de largument pour ajouter dico
 */
int	ft_is_valid_line(char *line, int mod)
{
	int	i;

	i = 0;
	if (line[i] == '\0')
		return (1);
	if (!ft_ok_until_nb(line, &i))
		return (0);
	while ((line[i] >= '0' && line[i] <= '9'))
		i++;
	while (line[i] == ' ')
		i++;
	if (line[i] != ':')
		return (0);
	i++;
	while (line[i] == ' ')
		i++;
	if (ft_char_is_printable(line[i]) && mod == 1)
		return (1);
	while (ft_char_is_printable(line[i]) && mod == 0)
		i++;
	if ((line[i] == '\n') && mod == 0)
		if (line[i + 1] == '\0')
			return (1);
	return (0);
}
