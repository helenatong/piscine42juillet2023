/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:45:11 by htong             #+#    #+#             */
/*   Updated: 2023/07/02 17:04:42 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_in_or_not(char a, int *pt)
{
	if (!(((a >= '0') && (a <= '9'))))
		*pt = 0;
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	quenum;

	i = 0;
	quenum = 1;
	while (str[i] != 0)
	{
		ft_in_or_not(str[i], &quenum);
		i++;
	}
	return (quenum);
}
/*
int main()
{
    char    str[] = "";
    char    str2[] = "4dfg";
    char    str3[] = "1"; 

    printf("%d", ft_str_is_numeric(str)); 
    printf("%d", ft_str_is_numeric(str2));
    printf("%d", ft_str_is_numeric(str3));
    return (0);
}
*/
