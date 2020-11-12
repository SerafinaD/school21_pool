#include <stdio.h>
 #include <unistd.h>
#include "ft_create_elem.c"
#include "ft_list_clear.c"

void	ft_free_statdat(void *data)
{
	data = (void*)0;
}

void	ft_free_listdat(void *data)
{
	t_list	*lvisit;
	t_list	*temp;

	lvisit = data;
	while (lvisit)
	{
		temp = lvisit;
		lvisit = lvisit->next;
		ft_free_statdat(temp->data);
		free(temp);
	}
}

int		main()
{
	t_list	*ilist;
	t_list	*slist;
	t_list	*clist;
	t_list	*ivisit;
	t_list	*svisit;
	t_list	*cvisit;
	t_list	*ilist_t;
	t_list	*slist_t;
	t_list	*clist_t;
	t_list	*ivisit_t;
	t_list	*svisit_t;
	t_list	*cvisit_t;
	t_list	*llist;
	int		iarr[5] = {4, 6, 8, 9, 1};
	char		carr[5] = {'4', 'a', 'j', '5', 'n'};
	char		*sarr[5] = {"yobanniy rot", "etogo kazino", "diler mudak", "your bullshit i fuck", "karti v nepravilnom poryadke"};
	int		iarr_t[5] = {4, 6, 8, 9, 1};
	char		carr_t[5] = {'4', 'a', 'j', '5', 'n'};
	char		*sarr_t[5] = {"yobanniy rot", "etogo kazino", "diler mudak", "your bullshit i fuck", "karti v nepravilnom poryadke"};

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
	ilist_t = ft_create_elem(&iarr_t[0]);
	clist_t = ft_create_elem(&carr_t[0]);
	slist_t = ft_create_elem(&sarr_t[0]);
	ivisit_t = ilist_t;
	svisit_t = slist_t;
	cvisit_t = clist_t;
	for (int i = 1; i < 5; i++)
	{
		ivisit_t->next = ft_create_elem(&iarr_t[i]);
		cvisit_t->next = ft_create_elem(&carr_t[i]);
		svisit_t->next = ft_create_elem(&sarr_t[i]);
		ivisit_t = ivisit_t->next;
		svisit_t = svisit_t->next;
		cvisit_t = cvisit_t->next;
	}
	llist = ft_create_elem(ilist_t);
	llist->next = ft_create_elem(clist_t);
	(llist->next)->next = ft_create_elem(slist_t);
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
	ft_list_clear(ilist, &ft_free_statdat);
	ft_list_clear(clist, &ft_free_statdat);
	ft_list_clear(slist, &ft_free_statdat);
	sleep(10);
}