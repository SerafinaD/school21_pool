#include <stdio.h>
#include <unistd.h>
#include "ft_create_elem.c"
#include "ft_list_clear.c"
#include "ft_list_at.c"
#include "ft_list_remove_if.c"

void	ft_free_statdat(void *data)
{
	data = (void*)0;
}

int	ft_justcomp(void *data, void *data_ref)
{
	if (*(int*)data == *(int*)data_ref)
		return (0);
	return (1);
}

int		main()
{
	t_list	*ilist;
	t_list	*slist;
	t_list	*clist;
	t_list	*ivisit;
	t_list	*svisit;
	t_list	*cvisit;
	int		data_ref = 1;
	int		iarr[5] = {4, 6, 9, 8, 1};
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
	ft_list_remove_if(&ilist, &data_ref, &ft_justcomp, &ft_free_statdat);
	for (int i = 1; i <= 4; i++)
		printf("%d\t", *((int*)(ft_list_at(ilist, i)->data)));
	printf("\n");
	for (int i = 1; i <= 5; i++)
		printf("%c\t", *((char*)(ft_list_at(clist, i)->data)));
	printf("\n");
	for (int i = 1; i <= 5; i++)
		printf("%s\t", *((char**)(ft_list_at(slist, i)->data)));

	ft_list_clear(ilist, &ft_free_statdat);
	ft_list_clear(clist, &ft_free_statdat);
	ft_list_clear(slist, &ft_free_statdat);
	sleep(10);
}