/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:40:08 by htong             #+#    #+#             */
/*   Updated: 2023/07/06 18:24:29 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = 0;
	lensrc = 0;
	i = 0;
	while (dest[lendest])
		lendest++;
	while (src[lensrc])
		lensrc++;
	if (lendest >= size)
		return (size + lensrc);
	while ((i < size - 1 - lendest) && (src[i]))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = 0;
	return (lendest + lensrc);
}

/*
int     main (int argc, char **argv)
{
	int i;
	char tab[] = "123";
    printf("%d \n", ft_strlcat(tab, argv[1],1));
	printf("%s", tab);
    return(0);
}
*/