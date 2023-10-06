/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:56:10 by htong             #+#    #+#             */
/*   Updated: 2023/07/03 20:47:55 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

void	ft_if_alphanum(char a, int *pt)
{
	if ((a >= 'A') && (a <= 'Z'))
		*pt = 1;
	else if ((a >= 'a') && (a <= 'z'))
		*pt = 1;
	else if ((a >= '0') && (a <= '9'))
		*pt = 1;
	else
		*pt = 0;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	alphanum;

	i = 1;
	if (str[0] == 0)
		return (str);
	else
	{
		ft_strupcase(&str[0]);
		while (str[i] != 0)
		{
			ft_if_alphanum(str[i - 1], &alphanum);
			if (alphanum == 1)
				ft_strlowcase(&str[i]);
			else
				ft_strupcase(&str[i]);
			i++;
		}
	}
	return (str);
}

/*
int main()
{
    int i;
    char    str[] = "54salut, comment tu vas 42ds gqw ll? ";
//salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
    i = 0;
    ft_strcapitalize(str);
    while (str[i] != 0)
    {
        printf("%c", str[i]); 
        i++;
    }
    return (0);
}
*/