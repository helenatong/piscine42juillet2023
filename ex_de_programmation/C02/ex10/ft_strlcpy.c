/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:28:34 by htong             #+#    #+#             */
/*   Updated: 2023/07/05 10:43:02 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lensrc;

	i = 0;
	lensrc = 0;
	while (src[lensrc])
		lensrc++;
	if (size == 0)
		return (lensrc);
	while ((i < size -1) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (lensrc);
}

/*
int main() 
{
    int     i;
    int	    n;
    unsigned int     w;
    char    src[] = "pommes de terre";

    char    dest[20]; 
    
    i = 0;
    n = 5;
    w = 0;
    w = ft_strlcpy(dest, src, n);
    while (i < n)
            {
				if (dest[i] != 0)
                	printf("%c,", dest[i]);
				i++;
            }
    printf("\n on a voulu copier : %d caracteres", w );
    return (0);
}
*/