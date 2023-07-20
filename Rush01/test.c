#include <stdio.h>
#include <unistd.h>

int	ft_verif_les_argv_ok(char *str) //OK
{
	int	i;

	i = 0;
	if (str == "")
		return (0);
	if (str[31] != '\0')
		return (0);
	while (i <= 30)
	{
		if (!((str[i] >= '1') && (str[i] <= '4')))
			return (0);
		i = i + 2;
	}
	i = 1;
	while (i <= 29)
	{
		if (!(str[i] >= ' '))
			return (0);
		i = i + 2;
	}
	return (1);
}

void    ft_print_grid(char tab[4][4]) 
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 4)
    {
        while (j < 4)
        {
            write(1, &(tab[i][j]), 1);
            if (j != 3)
                write(1, " ", 1);
            if (j == 3)
                write(1, "\n", 1);
            j++;
        }
        i++;
        j = 0;
    }
}


int ft_check_id_ok_row_from_left(char *row, int rowleft_value)
{
    char max_value;
    int i;
    int count_box;

    max_value = row[0];
    i = 1;
    count_box = 1;
    while (row[i])
    {
        if (max_value < row[i])
        {
            max_value = row[i];
            count_box++;
            printf("%d", max_value);
        }
        i++;
    }
    if (count_box == rowleft_value)
        return (1);
    return (0);
}


int main()
{
    char tab[4] = { '1' , '3', '2', '4' };
    printf("%d", ft_check_id_ok_row_from_left(tab, 2));

    return (0);
}



/*
int main()
{
    char tab[4][4] = { { 'a' , 'b', 'c', 'd' } , { '1' , '2', '3' ,'4' }, { '4' , '5', '6' ,'7' }, { '4' , '5', '6' ,'7' } };
    ft_print_grid(tab);

    return (0);
}
*/


/*
int main(int argc, char **argv)
{
    ft_print_grid_only(argv);
    return (0);
}
*/