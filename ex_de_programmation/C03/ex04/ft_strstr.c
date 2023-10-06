/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:25:50 by htong             #+#    #+#             */
/*   Updated: 2023/07/06 21:12:29 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*id;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[j])
		{
			id = &str[i];
			while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
			{
				j++;
				if (to_find[j] == 0)
					return (id);
			}
		}
	j = 0;
	i++;
	}
	return (0);
}

/*
int     main (int argc, char **argv)
{
    char     *i = 0;
    i = ft_strstr(argv[1], argv[2]);
    printf("%s", i);
    return(0);
}
*/