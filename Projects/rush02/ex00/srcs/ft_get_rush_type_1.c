/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rush_type_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:45:15 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 16:49:35 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_rush_type_1(char *str, int cols, int rows, int types[4])
{
	int lu;
	int ru;
	int ld;
	int rd;

	lu = 0;
	ru = cols - 1;
	ld = (cols + 1) * (rows - 1);
	rd = ((cols + 1) * rows) - 2;
	if (str[lu] == 'o' && str[ru] == 'o' && str[ld] == 'o' && str[rd] == 'o')
		types[0] = 1;
	else if (str[lu] == '/' && str[ru] == '\\' && str[ld] == '\\' && str[rd] == '/')
		types[1] = 1;
	else if (str[lu] == 'A' && str[ru] == 'A' && str[ld] == 'C' && str[rd] == 'C')
		types[2] = 1;
	else if (str[lu] == 'A' && str[ru] == 'C' && str[ld] == 'A' && str[rd] == 'C')
		types[3] = 1;
	else if (str[lu] == 'A' && str[ru] == 'C' && str[ld] == 'C' && str[rd] == 'A')
		types[4] = 1;
	return ()//и здесь тернарный оператор
}
