/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:26:36 by htong             #+#    #+#             */
/*   Updated: 2023/07/17 20:45:23 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i] || str2[i])
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

/* 
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_strcmp(av[1], av[2]));    
    return (0);
} */