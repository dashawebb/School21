/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 17:34:27 by bnage             #+#    #+#             */
/*   Updated: 2018/09/30 22:29:16 by bnage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		can_put(char (*teh)[3][9][9], int pos, int i)
{
	if ((*teh)[0][pos / 9][i - 1] == 'y' || (*teh)[1][pos % 9][i - 1] == 'y'
		|| (*teh)[2][(pos / 9 / 3) * 3 + (pos % 9) / 3][i - 1] == 'y')
	{
		return (0);
	}
	return (1);
}

int		check(char **argv)
{
	int		i;
	int		j;
	int		len;
	int		num;

	i = 0;
	num = 0;
	while (i != 9)
	{
		j = 0;
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		while (argv[i][j] != '\0' &&
	((argv[i][j] >= '0' && argv[i][j] <= '9')
	|| argv[i][j] == '.'))
			num += argv[i][j++] == '.' ? 0 : 1;
		if (j != 9 || len != 9)
			break ;
		i++;
	}
	if (i == 9 && num >= 17)
		return (1);
	return (0);
}
