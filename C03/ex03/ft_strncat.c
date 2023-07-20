/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:04:00 by htong             #+#    #+#             */
/*   Updated: 2023/07/04 17:54:25 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	l = 0;
	i = 0;
	while (dest[l] != 0)
	{
		l++;
	}
	while ((i < nb) && (src[i] != 0))
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = 0;
	return (dest);
}

/*
int     main (int argc, char **argv)
{
    int     i = 0;
    ft_strncat(argv[1], argv[2], 30);
    while (argv[1][i])
    {
        printf("%c",argv[1][i]);
        i++;
    }
    return(0);
}
*/
