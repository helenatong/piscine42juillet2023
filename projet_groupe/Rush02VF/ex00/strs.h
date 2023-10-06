/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:38:50 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 09:55:12 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRS_H
# define STRS_H

int		ft_strlen(char str[]);
void	ft_reverse(char str[]);
int		ft_char_is_printable(char c);
char	*ft_strcpy_delim(char dest[], char src[], int begin, int end);
char	*ft_trim(char str[]);
#endif
