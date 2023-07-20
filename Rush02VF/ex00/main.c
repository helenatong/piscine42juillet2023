/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:01:09 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 20:50:17 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "dictionary.h"
#include "numbers.h"
#include "print.h"
#include "strs.h"

int	ft_checkerrors(char args[], char pathname[]);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_checkerrors(argv[1], "numbers.dict") == 0)
			ft_decompose(argv[1], "numbers.dict");
	}
	else if (argc == 3)
	{
		if (ft_checkerrors(argv[2], argv[1]) == 0)
			ft_decompose(argv[2], argv[1]);
	}
	return (0);
}

int	ft_checkerrors(char args[], char pathname[])
{
	if (ft_strlen(args) > 12 || !ft_str_is_valid(args))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!ft_is_valid_dictionary(pathname))
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	return (0);
}
