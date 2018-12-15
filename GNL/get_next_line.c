/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:14:02 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/15 19:04:01 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char *reading_line(char *s, int fd)
// {
//     int ret;
//     char buf[BUFF_SIZE + 1];
//
//     // while (ret = read(fd, buf, BUFF_SIZE) > 0)
//     // {
//     //     buf[ret] = '\0';
//     //     s = ft_strjoin(s, buf);
//     // }
//     // return (s);
// }

int is_error(int fd, char **line, char **str)
{
    if (fd < 0 || line == NULL)
        return (1);
    if (!*line)
        return (1);
    str = (char **)malloc(sizeof(char*) * (BUFF_SIZE + 1));
    if (str == NULL)
        return (1);
    return (0);
}

int function_that_reads_line()
{

}

int get_next_line(const int fd, char **line)
{
    int i;
    int ret;
    char *temp;
    char buf[BUFF_SIZE + 1];
    static char *arr[1024];

    i = 0;
    if (is_error(fd, line, &arr) == 1)
        return (-1);
    while (ret = read(fd, buf, BUFF_SIZE) > 0)
    {
        buf[ret] = '\0';
        if (arr[fd] == NULL)
			arr[fd] = ft_strnew(1); // или strnew(0) ?
        temp = ft_strjoin(s[fd], buf);
    	free(s[fd]);
    	s[fd] = temp;
        if (ft_strchr(buf, '\n')
            break ;
    }
    if (ret < 0)
        return (-1);
    else if ((arr[fd][0] == '\0') && ret == 0)
    	return (0);
    else
        return (function_that_reads_line)
}
