/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 23:10:19 by htong             #+#    #+#             */
/*   Updated: 2023/06/30 21:32:19 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divaparb;
	int	modaparb;

	divaparb = *a / *b;
	modaparb = *a % *b;
	*a = divaparb;
	*b = modaparb;
}
