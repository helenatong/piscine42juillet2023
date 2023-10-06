/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:50:02 by htong             #+#    #+#             */
/*   Updated: 2023/07/02 19:52:48 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int main()
{
    int i;
    char    str[] = "ABCDE ajsd543 XZYW";

    i = 0;
    ft_strlowcase(str);
    while (str[i] != 0)
    {
        printf("%c", str[i]); 
        i++;
    }
    return (0);
}
*/
