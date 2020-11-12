/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:16:09 by grichie           #+#    #+#             */
/*   Updated: 2020/07/19 20:16:12 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp_mod(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if ((*s1 == '\0') && (*s2 != '\0'))
		return (4500);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *cur;
	char *nul;

	nul = NULL;
	cur = str;
	while (*cur != '\0')
	{
		if (ft_strcmp_mod(cur, to_find) == 0)
			return (cur);
		cur++;
	}
	if (*cur == '\0')
		return (nul);
	return (cur);
}
