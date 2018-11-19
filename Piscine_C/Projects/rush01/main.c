/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 12:44:06 by bnage             #+#    #+#             */
/*   Updated: 2018/09/30 18:55:26 by bnage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sudoku(char ***x);
void	putstr(char *x);
int		check(char **argv);
void	put_sudoku(char **x);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	success;

	i = 0;
	j = 0;
	success = 'n';
	if (argc == 10)
	{
		argv++;
		if (check(argv) == 1)
		{
			if (sudoku(&argv) == 1)
			{
				put_sudoku(argv);
				success = 'y';
			}
		}
	}
	success == 'n' ? putstr("Error\n") : 0;
}
