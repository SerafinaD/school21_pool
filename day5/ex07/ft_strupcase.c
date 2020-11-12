/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:32:48 by grichie           #+#    #+#             */
/*   Updated: 2020/07/18 14:38:54 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char str)
{
	int	ans;

	ans = 1;
	if (!(str >= 'a' && str <= 'z'))
		return (0);
	return (ans);
}

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_str_is_lowercase(str[c]))
			str[c] -= 'a' - 'A';
		c++;
	}
	return (str);
}
