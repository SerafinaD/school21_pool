/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 21:05:07 by grichie           #+#    #+#             */
/*   Updated: 2020/07/23 21:10:23 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	while (*src != '\0')
	{
		dest[len] = *src;
		len++;
		src++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (size == 0)
		return (dest = malloc(1));
	if (i < size)
		len += ft_strlen(strs[i++]);
	len += (size - 2) * ft_strlen(sep);
	if ((dest = malloc(len + 1)) == (void*)0)
	{
		errno = ENOMEM;
		return ((void*)0);
	}
	i = 0;
	dest = ft_strcat(dest, strs[i++]);
	while (i < size)
	{
		dest = ft_strcat(dest, sep);
		dest = ft_strcat(dest, strs[i++]);
	}
	return (dest);
}
