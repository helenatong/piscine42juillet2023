/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:41:39 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 20:53:32 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#include "strs.h"
#include "print.h"
#include "aziz.h"

#include <fcntl.h>
#include <stdlib.h>

void	ft_mmm(char *str, int *ptrmmm, int *len, int *i)
{
	*i = 0;
	*len = ft_strlen(str);
	if (*len >= 1 && *len <= 3)
		*ptrmmm = 0;
	else if (*len >= 4 && *len <= 6)
		*ptrmmm = 1;
	else if (*len >= 7 && *len <= 9)
		*ptrmmm = 2;
	else if (*len >= 10 && *len <= 12)
		*ptrmmm = 3;
	else
		*ptrmmm = -1;
}

void	ft_print_mmm(int *ptrmmm, char pathname[])
{
	if (*ptrmmm == 3)
		ft_keyexist("1000000000", pathname);
	else if (*ptrmmm == 2)
		ft_keyexist("1000000", pathname);
	else if (*ptrmmm == 1)
		ft_keyexist("1000", pathname);
	*ptrmmm = *ptrmmm - 1;
	if (*ptrmmm != -1)
		ft_putchar(' ');
}

char	*ft_decompose(char *str, char pathname[])
{
	int	mmm;
	int	len;
	int	id;
	int	i;
	int	is_ok;

	ft_mmm(str, &mmm, &len, &i);
	id = len - 1;
	if (mmm == -1)
		return ("Error Dict\n");
	while (mmm >= 0)
	{
		if (id % 3 == 2)
			is_ok = ft_print_hundred(str, &i, &id, pathname);
		if (id % 3 == 1)
			is_ok = ft_print_dozen(str, &i, &id, pathname);
		if (id % 3 == 0)
		{
			is_ok = ft_print_unit(str, &i, &id, pathname);
			if (mmm != 0)
				ft_putchar(' ');
		}
		ft_print_mmm(&mmm, pathname);
	}
	return (NULL);
}

int	ft_str_is_valid(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
