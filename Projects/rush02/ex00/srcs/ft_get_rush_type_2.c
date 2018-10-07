/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rush_type_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:49:49 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 16:53:06 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_rush_type_2(char *str, int cols, int rows, int types[4])
{
	int lu;
	int ru;
	int ld;
	int rd;

	lu = 0;
	ru = cols - 1;
	ld = (cols + 1) * (rows - 1);
	rd = ((cols + 1) * rows) - 2;
	else if (str[lu] == 'A' && str[ru] == 'A' && str[ld] == 'A' && str[rd] == 'A')
	{
		types[2] = 1;
		types[3] = 1;
		types[4] = 1;
	}
	else if ((rows == 1 && str[lu] == 'A' && str[ru] == 'C'  && str[ld] == 'A' && str[rd] == 'C')
			 || (rows == 1 && str[lu] == 'A' && str[ru] == 'A'  && str[ld] == 'C' && str[rd] == 'C'))
		{
			types[3] = 1;
			types[4] = 1;
		}
	else if ((cols == 1 && str[lu] == 'A' && str[ru] == 'C' && str[ld] == 'A' && str[rd] == 'C')
			 || (cols == 1 && str[lu] == 'A' && str[ru] == 'A' && str[ld] == 'C' && str[rd] == 'C'))
		{
			types[2] = 1;
			types[4] = 1;
		}
//тернарный оператор	return ();
}
