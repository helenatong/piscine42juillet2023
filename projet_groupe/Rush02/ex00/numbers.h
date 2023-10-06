/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:46:36 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 20:52:55 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H

char	*ft_decompose(char *str, char pathname[]);
int		ft_print_hundred(char *str, int *ptri, int *ptrid, char pathname[]);
void	ft_print_dozen_bis(char *str, char *ptr, int *ptri, char pathname[]);
void	ft_print_dozen_bis_bis(char *str, char *ptr, int *ptri, char name[]);
int		ft_print_dozen(char *str, int *ptri, int *ptrid, char pathname[]);
int		ft_print_unit(char *str, int *ptri, int *ptrid, char pathname[]);
void	ft_mmm(char *str, int *ptrmmm, int *len, int *i);
void	ft_print_mmm(int *ptrmmm, char pathname[]);
char	*ft_decompose(char *str, char pathname[]);
int		ft_str_is_valid(char *str);

#endif
