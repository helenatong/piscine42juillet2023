/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:50:03 by htong             #+#    #+#             */
/*   Updated: 2023/07/18 10:59:41 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *ptr;
	int	len;
	int i;

	i = 0;
	len = ft_strlen(src);
	ptr = malloc (sizeof(char) * (len + 1));
	if (ptr == 0)
		return (0);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}		

#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%s", ft_strdup(av[1]));
    return(0);
}