/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 13:01:51 by bnage             #+#    #+#             */
/*   Updated: 2018/09/30 22:17:32 by bnage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_count;

int		can_put(char (*teh)[3][9][9], int pos, int i);

int		set_usability(char (*teh)[3][9][9], int pos, int i, char state)
{
	int ans;

	ans = can_put(teh, pos, i);
	(*teh)[0][pos / 9][i - 1] = state;
	(*teh)[1][pos % 9][i - 1] = state;
	(*teh)[2][(pos / 9 / 3) * 3 + (pos % 9) / 3][i - 1] = state;
	return (ans);
}

int		find_anything(char ***x, char ***b, char (*th)[3][9][9], int p)
{
	int i;

	if (p == 81)
		return (g_count++);
	if ((*x)[p / 9][p % 9] != '.')
		return (find_anything(x, b, th, p + 1));
	i = 0;
	while (++i < 10)
	{
		if (can_put(th, p, i) == 0)
			continue;
		(*x)[p / 9][p % 9] = i + '0';
		(*b)[p / 9][p % 9] = i + '0';
		set_usability(th, p, i, 'y');
		find_anything(x, b, th, p + 1);
		if (g_count == 1)
			x = &(*b);
		if (g_count >= 2)
			return (g_count);
		set_usability(th, p, i, '.');
	}
	(*x)[p / 9][p % 9] = '.';
	(*b)[p / 9][p % 9] = '.';
	return (g_count);
}

int		fill_buf(char **x, char ***buf, char (*teh)[3][9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		(*buf)[i] = (char *)malloc(sizeof(char) * 9);
		if (i != 8)
			(*buf)[i + 1] = 0;
		while (j < 9)
		{
			(*buf)[i][j] = x[i][j];
			if (x[i][j] != '.'
			&& set_usability(teh, 9 * i + j, x[i][j] - '0', 'y') == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		fill(char **x, char ***buf, char (*teh)[3][9][9])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 9)
		{
			k = 0;
			while (k < 9)
			{
				(*teh)[i][j][k] = '.';
				k++;
			}
			j++;
		}
		i++;
	}
	j = fill_buf(x, buf, teh);
	i = -1;
	while (j == 0 && ++i < 9 && (*buf)[i] != 0)
		free((*buf)[i]);
	return (j);
}

int		sudoku(char ***x)
{
	char	**buf;
	char	teh[3][9][9];
	int		i;

	i = -1;
	g_count = 0;
	buf = (char **)malloc(sizeof(char *) * 10);
	if (fill(*x, &buf, &teh) == 0)
	{
		free(buf);
		return (0);
	}
	find_anything(x, &buf, &teh, 0);
	while (++i < 9)
		free(buf[i]);
	free(buf);
	return (g_count);
}
