/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:01:03 by htong             #+#    #+#             */
/*   Updated: 2023/07/03 19:33:12 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main() 
{
    int     i;
    char    src[] = "LOL";
    char    dest[50]; 
    
    i = 0;
    *ft_strcpy(dest, src);
    while (src[i] != 0)
            {
            	printf("%c,", dest[i]);
				i++;
            }
	printf("%d,", dest[i]);
    return (0);
}
*/
