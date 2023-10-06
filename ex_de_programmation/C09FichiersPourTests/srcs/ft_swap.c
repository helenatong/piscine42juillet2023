/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:27:47 by htong             #+#    #+#             */
/*   Updated: 2023/07/18 16:29:13 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *i1, int *i2)
{
    int tempo;

    tempo = *i1;
    *i1 = *i2;
    *i2 = tempo;
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    int a = 1;
    int b = 2;
    ft_swap(&a, &b);    
    printf("%d \n %d", a, b);
    return (0);
}*/