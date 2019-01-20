/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:17:31 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/21 21:48:03 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int			is_error(const int fd, char **line, char **str);
char		*ft_reading_line(char *s, int fd);
int			get_next_line(const int fd, char **line);

#endif
