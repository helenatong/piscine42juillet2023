/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:49:28 by htong             #+#    #+#             */
/*   Updated: 2023/07/20 11:34:29 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_len(int nb)
{
    int     len;
    long nbr;

    nbr = nb;
    len = 0;
    if (nbr == 0)
        return (1);
    if (nbr < 0)
    {
        len++;
        nbr = -nbr;
    }
    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    int len;
    char *s;
    int i;

    i = 1;
    len = ft_len(nbr);
    s = malloc((len + 1) * sizeof(char));
    if (s == NULL)
        return (0);
    if (nbr < 0)
    {
        s[0] = '-';
        nbr = -nbr;
    }
    while (i < len)
    {
        s[len - i] = nbr % 10 + '0';
        nbr = nbr / 10;
        i++;
    }
    if (s[0] != '-')
        s[0] = nbr % 10 + '0';
    s[i] = '\0';
    return (s);
}

int     main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", ft_itoa(atoi(av[1])));
    
    return (0);
}