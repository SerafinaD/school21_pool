/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 14:24:07 by grichie           #+#    #+#             */
/*   Updated: 2020/07/23 18:14:42 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char cs1;
	unsigned char cs2;

	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		cs1 = *s1;
		cs2 = *s2;
		if (cs1 != cs2)
			return (cs1 - cs2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_print_param(char *param)
{
	int		i;
	char	endl;

	i = 0;
	endl = '\n';
	while (param[i])
		write(1, &param[i++], 1);
	write(1, &endl, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		ft_print_param(argv[i]);
		i++;
	}
	return (0);
}
