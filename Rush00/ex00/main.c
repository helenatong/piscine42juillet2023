/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlecourt <qlecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:31:23 by qlecourt          #+#    #+#             */
/*   Updated: 2023/07/02 19:54:59 by qlecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

long int	fck_atoi(char *str)
{
	int			i;
	int			sign;
	long int	res;

	i = 0;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	else
		sign = 1;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res = res * sign;
	return (res);
}

int	main(int argc, char **argv)
{
	long int	a;
	long int	b;

	a = fck_atoi(argv[1]);
	b = fck_atoi(argv[2]);
	if (argc != 3)
		return (0);
	if (!(a > 2147483647 || b > 2147483647 || a < 0 || b < 0))
		rush(a, b);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	int	x;
// 	int	y;
// 	int	i;

// 	i = 0;
// 	while (argv[1][i] != '\0')
// 	{
// 		x = 0;
// 		y = 0;
// 		if (argv[1][i] >= 48 && argv[1][i] <= 58)
// 		{
// 			while (argv[1][i] >= 48 && argv[1][i] <= 58)
// 			{
// 				x = x * 10 + argv[1][i] - '0';
// 				i++;
// 			}
// 		}
// 		if (!(argv[1][i] >= 48 && argv[1][i] <= 58))
// 		{
// 			i = i + 1;
// 			while (argv[1][i] != '\0')
// 			{
// 				y = y * 10 + argv[1][i] - '0';
// 				i++;
// 			}
// 		}
// 	}
// 	rush(x, y);
// 	return (0);
// }
