/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:14:02 by elchrist          #+#    #+#             */
/*   Updated: 2018/12/18 23:21:31 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h> // тут лежит EOF
#include "get_next_line.h"

int is_error(const int fd, char **line, char **str)
{
    char    buff[BUFF_SIZE + 1];
    int     ret;

    if (BUFF_SIZE <= 0)
        return (1);
    if (fd < 0 || line == NULL)
        return (1);
    if (!*line)
        return (1);
    str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1)); //или *str
    if (str == NULL)
        return (1);
    if (ret = read(fd, buff, 0) < 0)
        return (1);
    return (0);
}

char *ft_reading_line(char *s, int fd)
{
    char    buff[BUFF_SIZE + 1];
    int     ret;

    while (ret = read(fd, buff, BUFF_SIZE) > 0)
    {
        buff[ret] = '\0';
        s = ft_strjoin(s, buff);
    }
    return (s);
}

// while (ret = read(fd, buff, BUFF_SIZE) > 0)
// {
//     buff[ret] = '\0';
//     // if (s[fd] == NULL)
//     //    s[fd] = ft_strnew(1);
//     temp = ft_strjoin(s[fd], buff);
//     free(s[fd]);
//     s[fd] = temp;
//     if (ft_strchr(buff, '\n'))
//         break ;
// }

int get_next_line(const int fd, char **line)
{
    static char *s[1024]; //или просто *s??
	char buff[BUF_SIZE + 1]; //мб buff и ret можно закомментить, т.к. они описаны раньше
	int count;

    count = 0;
    if (is_error(fd, line, s) == 1) // или &s?
        return (-1);
    // if (*s)
    s = ft_strcpy(*line, s); // надо ли?
    s = ft_reading_line(s, fd); // в s кладётся то, что передал fd в буфер
    if (s[count]) // HEZE VOOBSHE MOJET I NE TAK
    {
        while (s[count] && s[count] != '\n')
            count++;
        if (count == 0)
            *line = ft_strdup("");
        else
            *line = ft_strsub(s, 0, count); //записываем в лайн всё с 0 до каунт
        s = &s[count + 1]; //кидаем в s пойнтер на следующий символ
        return (1);
    }
    else
        *line = ft_strdup("");
    return (0);
}
