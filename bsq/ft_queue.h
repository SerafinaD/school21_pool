#ifndef FT_QUEUE_H
# define FT_QUEUE_H
# include <stdlib.h>

typedef struct	s_queue
{
	char	c;
	struct s_queue	*prev;
}				t_queue;
void	ft_pop(t_queue **head);
void	ft_push(t_queue **tail, char c);
#endif