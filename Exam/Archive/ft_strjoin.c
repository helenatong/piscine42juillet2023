/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:11:30 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 16:39:48 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_lentot(int size, char **strs, char *sep)
{
    int i;
    int len_tot;

    i = 0;
    len_tot = 0;
    while (strs[i])
    {
        len_tot += ft_strlen(strs[i]);
        i++;
    }
    len_tot += ft_strlen(sep) * (size - 1);
    return (len_tot);
}

char *ft_for_size_zero()
{
    char *out;
    
    out = malloc(1);
    if (out == 0)
        return (0);
    out = "";
    return (out);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *out;
    int i_strs;
    int i;
    int len_tot;
    int j;

    i_strs = -1;
    i = 0;
    if (size == 0)
        return (ft_for_size_zero());
    len_tot = ft_lentot(size, strs, sep);
    out = malloc((len_tot + 1) * sizeof(char));
    if (out == 0)
        return (0);
    while (++i_strs < size)
    {
        j = 0;
        while (strs[i_strs][j])
            out[i++] = strs[i_strs][j++];
        j = 0;
        while ((sep[j]) && (i_strs != size - 1))
            out[i++] = sep[j++];
    }
    out[i] = '\0';
    return (out);
}

int main(int ac, char **av)
{
    (void)ac;
    printf("%s", ft_strjoin(atoi(av[1]), av + 3, av[2]));
    return (0);
}

/*
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_lentot(atoi(av[1]), av + 3, av[2]));
    return (0);
}*/