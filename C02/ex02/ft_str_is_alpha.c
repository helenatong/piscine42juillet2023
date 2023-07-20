/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:10:53 by htong             #+#    #+#             */
/*   Updated: 2023/07/03 19:52:39 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_in_or_not(char a, int *pt)
{
	if (!(((a >= 'A') && (a <= 'Z')) || ((a >= 'a') && (a <= 'z'))))
		*pt = 0;
}	

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	quealpha;

	i = 0;
	quealpha = 1;
	while (str[i] != 0)
	{
		ft_in_or_not(str[i], &quealpha);
		i++;
	}
	return (quealpha);
}

/*
int main()
{
    char    str[] = "ADFgs5ad";
    char    str2[] = "ADS4Jfkehf5";
    char    str3[] = ""; 

    printf("%d", ft_str_is_alpha(str)); 
    printf("%d", ft_str_is_alpha(str2));
    printf("%d", ft_str_is_alpha(str3));
    return (0);
}
*/