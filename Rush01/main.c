/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:25:24 by randrieu          #+#    #+#             */
/*   Updated: 2023/07/08 17:12:07 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_fonction_qui_change_les_arg(char **tab, char *str);
void ft_fonction_qui_remplit_cases_obvious(char **tab);


int main(int argc, char **argv)
{
	char **grid;
	int row; 
	int col; 
	
if (argc != 2)
{
	write(2, "Error\n", 6);
	return (2); 
}

if (argc == 2)
{
// verifier que la chaine de caractere est bonne ft_fonction_qui_verifie_le_argv
	if (ft_verif_les_argv_ok(argv[1]) == 0) 
	{
		write(2, "Error\n", 6);
		return (2); 
	}
	row = 1;
	col = 1;
// initialiser le tableau avec les inputs< a faire 
	ft_fonction_qui_change_les_arg(grid, agrv[1]); 

// Remplir les cases obvious (option)
	ft_fonction_qui_remplit_cases_obvious(grid);

// Remplir les cases
while (row <= 4)
{
	while (col <= 4)
	{
		if (grid[row][col] == 0) // faut initialise le tableau a zero
			{

			}
		//fonction qui remplit une ligne : ft_ligne
		ft_case_fill(argv[row])
		//fonction qui check si ligne ok
			//si pbm retour arriere. Backtracking

		//quqnd row == 4, check a chaque fois colonne
	}
	col = 1;
	row++;
	//error if do not work
}

//ft_print_grid_only

int	ft_verif_les_argv_ok(char *str)
{
	int	i;

	i = 0;
	if (str == "")
		return (0);

	while (str[i + 1])
	{
		if (!(str[i] >= 1 && str[i] <= 4))
			|| (str [i + 1] != " ")
			return (0);
		i++;
	}
	return (0);
}







}
	return (0);
}