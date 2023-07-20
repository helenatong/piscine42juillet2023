/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:04:35 by htong             #+#    #+#             */
/*   Updated: 2023/07/16 20:36:19 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#include "strs.h"
#include "print.h"
#include "aziz.h"

#include <fcntl.h>
#include <stdlib.h>

int	ft_print_hundred(char *str, int *ptri, int *ptrid, char pathname[])
{
	char	*ptr;

	ptr = malloc(3);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	*ptr = str[*ptri];
	if (ptr[0] != '0')
	{
		ptr[1] = '\0';
		ft_keyexist(ptr, pathname);
		ft_putchar(' ');
		ft_keyexist("100", pathname);
	}
	*ptri = *ptri + 1;
	*ptrid = *ptrid - 1;
	free(ptr);
	if (!(str[*ptri] == '0' && str[*ptri + 1] == '0'))
		ft_putchar(' ');
	return (1);
}

void	ft_print_dozen_bis(char *str, char *ptr, int *ptri, char pathname[])
{
	ptr[1] = '0';
	ptr[2] = '\0';
	ft_keyexist(ptr, pathname);
	if (str[*ptri + 1] != '0')
		ft_putchar('-');
	*ptri = *ptri + 1;
}

void	ft_print_dozen_bis_bis(char *str, char *ptr, int *ptri, char pathname[])
{
	ptr[1] = str[*ptri + 1];
	ptr[2] = '\0';
	ft_keyexist(ptr, pathname);
	*ptri = *ptri + 2;
	ft_putchar(' ');
}

int	ft_print_dozen(char *str, int *ptri, int *ptrid, char pathname[])
{
	char	*ptr;

	ptr = malloc(3);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	ptr[0] = str[*ptri];
	(*ptrid)--;
	if (ptr[0] == '0')
		*ptri = *ptri + 1;
	else if (ptr[0] != '1')
		ft_print_dozen_bis(str, ptr, ptri, pathname);
	else
	{
		ft_print_dozen_bis_bis(str, ptr, ptri, pathname);
		(*ptrid)--;
	}
	free(ptr);
	return (1);
}

int	ft_print_unit(char *str, int *ptri, int *ptrid, char pathname[])
{
	char	*ptr;

	ptr = malloc(3);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	*ptr = str[*ptri];
	if (ptr[0] != '0')
	{
		ptr[1] = '\0';
		ft_keyexist(ptr, pathname);
	}
	*ptri = *ptri + 1;
	*ptrid = *ptrid - 1;
	free(ptr);
	return (1);
}
