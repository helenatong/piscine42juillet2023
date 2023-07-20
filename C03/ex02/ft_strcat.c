/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:52:43 by htong             #+#    #+#             */
/*   Updated: 2023/07/04 16:13:43 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_lenght_string(char *str, int *lenghtstr)
{
	int	l;

	l = 0;
	while (str[l] != 0)
	{
		l++;
		*lenghtstr += 1;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	lenghtdest;
	int	i;

	lenghtdest = 0;
	i = 0;
	ft_lenght_string(dest, &lenghtdest);
	while (src[i] != 0)
	{
		dest[lenghtdest + i] = src[i];
		i++;
	}
	dest[lenghtdest + i] = 0;
	return (dest);
}

/*
int     main (int argc, char **argv)
{
    int     i = 0;
    ft_strcat(argv[1], argv[2]);
    while (argv[1][i])
    {
        printf("%c",argv[1][i]);
        i++;
    }
    return(0);
}
*/
