#include <stdio.h>
#include "ft_sort_string_tab.c"

int	main()
{
	char	*ch[] = {"rray", "green", "a1234", (void*)0};

	for (int i = 0; i < 3; i++)
		printf("%s\t", ch[i]);
	ft_sort_string_tab(ch);
	for (int i = 0; i < 3; i++)
		printf("\n%s", ch[i]);
}