#include <stdio.h>
#include "ft_create_elem.c"
#include "ft_list_push_front.c"

void	ft_lists_free(t_list *il, t_list *cl, t_list *sl)
{
	t_list	*ivisit = il;
	t_list	*svisit = sl;
	t_list	*cvisit = cl;
	t_list	*temp;

	for (int i = 0; i < 5; i++)
	{
		temp = ivisit;
		ivisit = ivisit->next;
		free(temp);
		temp = cvisit;
		cvisit = cvisit->next;
		free(temp);
		temp = svisit;
		svisit = svisit->next;
		free(temp);
	}
}

int	main()
{
	t_list	*ilist;
	t_list	*slist;
	t_list	*clist;
	t_list	*ivisit;
	t_list	*svisit;
	t_list	*cvisit;
	t_list	*empty = (void*)0;
	int		iarr[5] = {4, 6, 8, 9, 1};
	char		carr[5] = {'4', 'a', 'j', '5', 'n'};
	char		*sarr[5] = {"yobanniy rot", "etogo kazino", "diler mudak", "your bullshit i fuck", "karti v nepravilnom poryadke"};

	ft_list_push_front(&ilist, &iarr[0]);
	ft_list_push_front(&clist, &carr[0]);
	ft_list_push_front(&slist, &sarr[0]);
	for (int i = 0; i < 5; i++)
	{
		ft_list_push_front(&ilist, &iarr[i]);
		ft_list_push_front(&clist, &carr[i]);
		ft_list_push_front(&slist, &sarr[i]);
	}
	ivisit = ilist;
	svisit = slist;
	cvisit = clist;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", *((int*)ivisit->data));
		ivisit = ivisit->next;
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%c\t", *((char*)cvisit->data));
		cvisit = cvisit->next;
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\t", *((char**)svisit->data));
		svisit = svisit->next;
	}
	ft_list_push_front(&empty, &sarr[0]);
	printf("\n%s\t", *((char**)empty->data));
	free(empty);
	ft_lists_free(ilist, clist, slist);
}