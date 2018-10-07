#ifndef MAIN_H
# define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_get_rush_size(char *str, int *width, int *height);
int		ft_get_rush_type(char *str, int cols, int rows, int types[3]);

#endif