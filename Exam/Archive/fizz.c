/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:38:02 by htong             #+#    #+#             */
/*   Updated: 2023/07/19 19:07:46 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_purchar(char c)
{
    write(1, &c, 1);
}

void ft_putnb(int n)
{
    if (n >= 10)
    {
        ft_putnb(n/10);
        ft_purchar(n%10+'0');
        n = n /10;
    }
    else
        ft_purchar(n%10 +'0');
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if ((i%3 == 0) && (i%5 == 0))
            write (1, "fizzbuzz", 8);
        else if (i%5 == 0)
            write (1, "buzz", 4);
        else if (i%3 == 0)
            write (1, "fizz", 4);
        else 
            ft_putnb(i);
        write (1, "\n", 1);
        i++;
    }
    return (0);
}