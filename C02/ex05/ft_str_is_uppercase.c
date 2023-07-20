/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:36:20 by htong             #+#    #+#             */
/*   Updated: 2023/07/02 17:40:02 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_in_or_not(char a, int *pt)
{
	if (!(((a >= 'A') && (a <= 'Z'))))
		*pt = 0;
}	

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	quemaj;

	i = 0;
	quemaj = 1;
	while (str[i] != 0)
	{
		ft_in_or_not(str[i], &quemaj);
		i++;
	}
	return (quemaj);
}

/*
int main()
{
    char    str[] = "15sdf";
    char    str2[] = "KJFHA";
    char    str3[] = "DJdf"; 

    printf("%d", ft_str_is_uppercase(str)); 
    printf("%d", ft_str_is_uppercase(str2));
    printf("%d", ft_str_is_uppercase(str3));
    return (0);
}
*/
