/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 21:33:30 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 21:33:31 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	ft_compute_extreme(int width, int height, int pos[4]);
int		ft_get_rush_size(char *str, int *width, int *height);
int		ft_validate_rush(char *str, int types[5], int width, int height);
int		ft_get_rush_type(char *str, int width, int height, int types[5]);

#endif
