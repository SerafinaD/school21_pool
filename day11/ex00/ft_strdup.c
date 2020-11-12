/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:33:38 by grichie           #+#    #+#             */
/*   Updated: 2020/07/23 17:36:05 by grichie          ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	if ((dest = malloc(ft_strlen(src) + 1)) == (void*)0)
	{
		errno = ENOMEM;
		return ((void*)0);
	}
	dest = ft_strcpy(dest, src);
	return (dest);
}
