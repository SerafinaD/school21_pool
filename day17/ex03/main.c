#include <stdio.h>
#include "ft_create_elem.c"
#include "ft_list_last.c"

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
	int		iarr[5] = {4, 6, 8, 9, 1};
	char		carr[5] = {'4', 'a', 'j', '5', 'n'};
	char		*sarr[5] = {"yobanniy rot", "etogo kazino", "diler mudak", "your bullshit i fuck", "karti v nepravilnom poryadke"};

	ilist = ft_create_elem(&iarr[0]);
	clist = ft_create_elem(&carr[0]);
	slist = ft_create_elem(&sarr[0]);
	ivisit = ilist;
	svisit = slist;
	cvisit = clist;
	for (int i = 1; i < 5; i++)
	{
		ivisit->next = ft_create_elem(&iarr[i]);
		cvisit->next = ft_create_elem(&carr[i]);
		svisit->next = ft_create_elem(&sarr[i]);
		ivisit = ivisit->next;
		svisit = svisit->next;
		cvisit = cvisit->next;
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
	printf("\n%d: \n%c: \n%s: \n", *((int*)ft_list_last(ilist)->data), *((char*)ft_list_last(clist)->data), *((char**)ft_list_last(slist)->data));
	ft_lists_free(ilist, clist, slist);
}