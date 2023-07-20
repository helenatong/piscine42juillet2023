/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:13:36 by htong             #+#    #+#             */
/*   Updated: 2023/07/05 10:48:44 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	hexa(unsigned char c)
{
	char	*tab_conv;

	tab_conv = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &tab_conv[c / 16], 1);
	write(1, &tab_conv[c % 16], 1);
}

int	ft_cara_is_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	printable;

	i = 0;
	while (str[i] != 0)
	{
		printable = ft_cara_is_printable(str[i]);
		if (printable == 1)
			write(1, &str[i], 1);
		else
			hexa(str[i]);
		i++;
	}
}

/*
int main() 
{
    char    str[] = "54 asdklj \n \a \0";
    ft_putstr_non_printable(str);
    return (0);
}
*/