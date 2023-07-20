/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:41:21 by htong             #+#    #+#             */
/*   Updated: 2023/07/03 19:44:39 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	finsrc;
	unsigned int	i;

	i = 0;
	finsrc = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			finsrc = 1;
			dest[i] = 0;
		}
		else if (finsrc == 0)
			dest[i] = src[i];
		else
			dest[i] = 0;
		i++;
	}
	return (dest);
}

/*
int main() //ici on va couper apres pommes
{
    int     i;
    char    src[] = "J aime manger des pommes de terre";
//taille 33, tester 24 et + grnd
    char    dest[50]; 
    
    i = 0;
    ft_strncpy(dest, src, 24);
    while (i < 24)
            {
				if (dest[i] != 0)
                	printf("%c,", dest[i]);
				else
					printf("%d,", dest[i]);//print les 0
				i++;
            }
	printf("%c,", dest[i]);
    return (0);
}
*/
