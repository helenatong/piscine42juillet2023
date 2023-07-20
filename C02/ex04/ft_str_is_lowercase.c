/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:06:50 by htong             #+#    #+#             */
/*   Updated: 2023/07/02 17:34:32 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_in_or_not(char a, int *pt)
{
	if (!(((a >= 'a') && (a <= 'z'))))
		*pt = 0;
}	

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	quemin;

	i = 0;
	quemin = 1;
	while (str[i] != 0)
	{
		ft_in_or_not(str[i], &quemin);
		i++;
	}
	return (quemin);
}

/*
int main()
{
    char    str[] = "";
    char    str2[] = "skdfha4z";
    char    str3[] = "skdgjhF"; 

    printf("%d", ft_str_is_lowercase(str)); 
    printf("%d", ft_str_is_lowercase(str2));
    printf("%d", ft_str_is_lowercase(str3));
    return (0);
}
*/
