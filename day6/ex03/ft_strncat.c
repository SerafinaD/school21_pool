/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grichie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:05:04 by grichie           #+#    #+#             */
/*   Updated: 2020/07/19 16:05:05 by grichie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lend;
	unsigned int	len;

	lend = 0;
	len = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[len] != '\0' && (len != nb))
	{
		dest[len + lend] = src[len];
		len++;
	}
	dest[len + lend] = '\0';
	return (dest);
}
