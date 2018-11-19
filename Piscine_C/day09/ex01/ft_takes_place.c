/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:23:19 by elchrist          #+#    #+#             */
/*   Updated: 2018/09/27 18:11:39 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 12 && hour != 11 && hour > 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1));
	if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 0 || hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
}
