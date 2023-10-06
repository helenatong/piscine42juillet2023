/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:36:59 by pnguyen-          #+#    #+#             */
/*   Updated: 2023/07/16 10:11:00 by pnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

int	ft_is_valid_dictionary(char pathname[]);
int	ft_getnumlines(char pathname[]);
int	ft_readline(int fd, char buffer[], int size);
int	ft_ok_until_nb(char *str, int *ptr);
int	ft_is_valid_line(char *line, int mod);
#endif
