/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:47:37 by grichie           #+#    #+#             */
/*   Updated: 2020/07/18 14:47:43 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char str)
{
	int	ans;

	ans = 1;
	if (!(str >= 'A' && str <= 'Z'))
		return (0);
	return (ans);
}

char	*ft_strlowcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_str_is_uppercase(str[c]))
			str[c] += 'a' - 'A';
		c++;
	}
	return (str);
}
