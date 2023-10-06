/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:28:25 by htong             #+#    #+#             */
/*   Updated: 2023/07/02 19:48:11 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int main()
{
    int i;
    char    str[] = "abcdef11xyz";

    i = 0;
    ft_strupcase(str);
    while (str[i] != 0)
    {
        printf("%c", str[i]); 
        i++;
    }
    return (0);
}
*/
