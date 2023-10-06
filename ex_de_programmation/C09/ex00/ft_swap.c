/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:27:47 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 15:33:16 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
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
