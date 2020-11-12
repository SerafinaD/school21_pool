/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 17:27:37 by grichie           #+#    #+#             */
/*   Updated: 2020/07/29 17:27:39 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;
	int		len;

	i = 0;
	len = 0;
	while (tab[len] != (void*)0)
		len++;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
