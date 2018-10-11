/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:06:06 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/11 15:18:14 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int length;
	
	length = 0;
	if (argc == 2)
	{
		while (argv[1][length])
            length++;
		while (length)
		{
			length--;
			write(1, &argv[1][length], 1);
		}
	}
	write(1, "\n", 1);
}
