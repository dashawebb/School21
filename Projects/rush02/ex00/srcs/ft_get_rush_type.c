/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rush_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:32:03 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 15:28:21 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_rush_type(char *str, int cols, int rows, int types[3])
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
	{
		types[0] = 0;
		return (1);
	}
	else if (str[lu] == '/' && str[ru] == '\\' && str[ld] == '\\' && str[rd] == '/')
	{
		types[0] = 1;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'A' && str[ld] == 'C' && str[rd] == 'C')
	{
		types[0] = 2;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'C' && str[ld] == 'A' && str[rd] == 'C')
	{
		types[0] = 3;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'C' && str[ld] == 'C' && str[rd] == 'A')
	{
		types[0] = 4;
		return (1);
	}
	else if (str[lu] == 'A' && str[ru] == 'A' && str[ld] == 'A' && str[rd] == 'A')
	{
		types[0] = 2;
		types[1] = 3;
		types[2] = 4;
	}
	else if (rows == 1 && str[lu] == 'A' && str[ru] == 'C'  && str[ld] == 'A' && str[rd] == 'C') || \
            (rows == 1 && str[lu] == 'A' && str[ru] == 'A'  && str[ld] == 'C' && str[rd] == 'C')
	{
		types[0] = 3;
		types[1] = 4;
	}
	else if (cols == 1 && str[lu] == 'A' && str[ru] == 'C' && str[ld] == 'A' && str[rd] == 'C') || \
            (cols == 1 && str[lu] == 'A' && str[ru] == 'A' && str[ld] == 'C' && str[rd] == 'C')
	{
		types[0] = 2;
		types[1] = 4;
	}
	return (0);
}
