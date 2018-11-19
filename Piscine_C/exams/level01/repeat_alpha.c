/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:49:38 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/10 22:19:59 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	int i;
	int letter;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter = argv[1][i] - 64;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter = argv[1][i] - 96;
			else
				write(1, &argv[1][i], 1);
			while (letter > 0)
			{
				write(1, &argv[1][i], 1);
				letter--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
