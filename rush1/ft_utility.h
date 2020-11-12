#ifndef FT_UTILITY_H
# define FT_UTILITY_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0

typedef short t_bool;
t_bool	ft_split(char *str, int *arr);
void	ft_free(int **arr);
#endif