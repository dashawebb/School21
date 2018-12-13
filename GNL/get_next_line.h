/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:17:31 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/13 18:55:29 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int get_next_line(const int fd, char **line);
int new_line(char **s, char **line, int fd, int size);

#endif
