/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:36:59 by htong             #+#    #+#             */
/*   Updated: 2023/07/09 16:17:20 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	if (index + 2 >= 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("%d",ft_fibonacci(atoi(argv[1])));
    return (0);
}
*/

/*
int ft_fibonacci_iterative(int index)
{
    int i;
    int n_2;
    int n_1;
    int swap;

    i = 1;
    n_2 = 0;
    n_1 = 1;

    if (index == 0)
        return(n_2);

    if (index == 1)
        return(n_1);
    
    while (i != index)
    {
        swap = n_1;
        n_1 = n_2 + n_1;
        n_2 = swap;
        i++;
    }
    return (n_1);
}
*/
