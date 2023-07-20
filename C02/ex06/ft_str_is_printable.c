/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:49:14 by htong             #+#    #+#             */
/*   Updated: 2023/07/03 19:55:11 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] >= ' ') && (str[i] <= '~')))
			return (0);
		i++;
	}
	return (1);
}

/*
int main()
{
    char    str[] = " ";
    char    str2[] = "skdfha4z";
    char    str3[] = "gad\\nasdn"; 

    printf("%d", ft_str_is_printable(str)); 
    printf("%d", ft_str_is_printable(str2));
    printf("%d", ft_str_is_printable(str3));
    return (0);
}
*/
