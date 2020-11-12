/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:53:15 by grichie           #+#    #+#             */
/*   Updated: 2020/07/18 19:53:19 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_lowercase(char str)
{
	int	ans;

	ans = 1;
	if (!(str >= 'a' && str <= 'z'))
		return (0);
	return (ans);
}

int		ft_char_is_numeric(char str)
{
	int	ans;

	ans = 1;
	while (str != '\0')
	{
		if (!(str >= '0' && str <= '9'))
			return (0);
		str++;
	}
	return (ans);
}

int		ft_char_is_uppercase(char str)
{
	int	ans;

	ans = 1;
	if (!(str >= 'A' && str <= 'Z'))
		return (0);
	return (ans);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_char_is_lowercase(str[c]))
			str[c] += 'A' - 'a';
		while (str[c] != '\0' && (ft_char_is_uppercase(str[c + 1]) ||
		ft_char_is_lowercase(str[c + 1]) || ft_char_is_numeric(str[c + 1])))
		{
			++c;
			if (ft_char_is_uppercase(str[c]) && ft_char_is_numeric(str[c - 1]))
				str[c] += 'a' - 'A';
			if (ft_char_is_uppercase(str[c]))
				str[c] += 'a' - 'A';
		}
		c++;
	}
	return (str);
}
