/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:43:02 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 21:08:22 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int ft_appear_multiple_times(char c, char *str)
{
    int i;

    i = -1;
    while (str[i++])
    {
        if (c == str[i])
            return(1);
    }
    return (0)
}       

/*
 * Faire une fonction avant le programme ...
int main(int ac, char **av)
{
    int i;
    int j;
    int is_unique;
    int lens1;
    int lens2;

    if (ac != 3)
    {
        write (1, "\n", 1);
        return (0);
    }
    i = 0;
    lens1 = ft_strlen(av[1]);
    lens2 = ft_strlen(av[2]);
    while (i < lens1)
    {
        is_unique = 1;
        j = i + 1;
        while (av[1][j] && is_unique)
        {
            if (av[1][i]==av[1][j])
                is_unique = 0;
            j++;
        }
        if (is_unique)
            //write (1, &av[1][i], 1);
        printf("%c \n",av[1][i]);
        i++;
    }
    //len prenier
    i = 0;
    while (i < lens2)
    {
        is_unique = 1;
        j = i + 1;
        while (av[2][j] && is_unique)
        {
            if (av[2][i]==av[2][j])
                is_unique = 0;
            j++;
        }

        j = 0;
        while (av[1][j] && is_unique)
        {
            if (av[2][i]==av[1][j])
                is_unique = 0;
            j++;
        }
        if (is_unique)
            write (1, &av[2][i], 1);
        i++;
    }

    write (1, "\n", 1);
    return (0);
}*/