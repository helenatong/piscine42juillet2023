/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:31:04 by htong             #+#    #+#             */
/*   Updated: 2023/07/17 17:20:56 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H 

struct s_point
{
	int	x;
	int	y;
};

typedef struct s_point	t_point;
#endif

/*
#include "ft_point.h"
#include <stdio.h>

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    printf("x : %d, y : %d", point.x, point.y);
    return (0);
}*/
