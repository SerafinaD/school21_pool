#include "ft_queue.h"
t_queue	*ft_createlem(char c)
{
	t_queue	*node;

	node = (t_queue*)malloc(sizeof(node));
	if (node)
	{
		node->prev = (void*)0;
		node->c = c;
	}
	return (node);
}

void	ft_push(t_queue **tail, char c)
{
	t_queue	*node;

	node = ft_createlem(c);
	if (*tail)
		(*tail)->prev = node;
	*tail = node;
}

void	ft_pop(t_queue **head)
{
	t_queue	*temp;

	temp = *head;
	*head = temp->prev;
	free (temp);
}